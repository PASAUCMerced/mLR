import cupy as cp
import numpy as np
import torch.nn as nn
import torch.nn.functional as F
import torch
from lam_usfft.usfft1d import usfft1d
from lam_usfft.usfft2d import usfft2d
from lam_usfft.fft2d import fft2d
from lam_usfft import utils
from threading import Thread
import time
import pdb
from memory_profiler import profile
import sys
from lam_usfft.memo import DistributedFaissManager
import asyncio
import aiofiles
from concurrent.futures import ThreadPoolExecutor
import concurrent
import os
import multiprocessing as mp
# import gc
import sys
import faiss
from mpi4py import MPI
# import nvtx
import pickle
# import numexpr

device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

CHUNK_SIZE = 128 * 1024 * 1024  # 128 MB chunks
MAX_CONCURRENT_TASKS = 4
MAX_WORKERS = 4  

class Complex2vec(nn.Module):
    def __init__(self, input_channels, num_features):
        super(Complex2vec, self).__init__()
        self.conv1 = nn.Conv2d(input_channels, 16, kernel_size=5, stride=2, padding=2)
        self.pool1 = nn.MaxPool2d(kernel_size=2, stride=2) 
        self.conv2 = nn.Conv2d(16, 32, kernel_size=5, stride=2, padding=2)
        self.pool2 = nn.MaxPool2d(kernel_size=2, stride=2)  

        self.fc = nn.Linear(55296, num_features)
        self.flatten = nn.Flatten()

    def forward(self, x):
        x = F.relu(self.conv1(x))
        x = self.pool1(x)  
        x = F.relu(self.conv2(x))
        x = self.pool2(x)  
        x = self.flatten(x)
        x = self.fc(x)
        return x

class FaissVectorDB:
    def __init__(self, dimension, index_type="flat", nlist=10, similarity_threshold=0.90):
        self.dimension = dimension
        print("dimension in database:",dimension)
        self.similarity_threshold = similarity_threshold
        
        # Initialize index with Inner Product (cosine similarity) metric
        if index_type.lower() == "flat":
            base_index = faiss.IndexFlatIP(dimension)
        elif index_type.lower() == "ivf":
            quantizer = faiss.IndexFlatIP(dimension)
            base_index = faiss.IndexIVFFlat(quantizer, dimension, nlist, faiss.METRIC_INNER_PRODUCT)
        else:
            raise ValueError("Unsupported index type. Use 'flat' or 'ivf'.")
        
        self.index = faiss.IndexIDMap2(base_index)
        self.CACHE_HIT = 0
        self.CACHE_MISS = 0
        # self.simi_record = []
        # self.countbrank = 0 
        self.vector_values = {} 

    def _normalize(self, vectors):
        """Normalize vectors to unit length."""
        if len(vectors.shape) == 1:
            norm = np.linalg.norm(vectors)
            return vectors / norm if norm != 0 else vectors
        else:
            norms = np.linalg.norm(vectors, axis=1)
            norms[norms == 0] = 1.0  # Avoid division by zero
            return vectors / norms[:, np.newaxis]

    def train(self, training_data):
        if not self.index.index.is_trained:
            normalized_data = self._normalize(training_data)
            self.index.index.train(normalized_data)

    def get_vector_by_id(self, vec_id):
        try :
            vector = self.index.reconstruct(int(vec_id))
            return vector
        except:
            return None
        
    def get_value_by_id(self, vec_id):
        """vec_id get value"""
        return self.vector_values.get(vec_id, None)

    def update_vector(self, vector, vec_id, value=None):
        """Update vector with normalized version."""
        normalized_vector = self._normalize(vector.astype(np.float32))
        self.index.remove_ids(np.array([vec_id], dtype=np.int64))
        self.index.add_with_ids(normalized_vector, np.array([vec_id], dtype=np.int64))
        self.vector_values[vec_id] = value

    def check_and_update_vector(self, input_vector, vec_id, value=None):
        """Optimized cosine similarity check with pre-normalized vectors."""
        # Normalize input vector
        input_vector = input_vector.astype(np.float32)
        input_normalized = self._normalize(input_vector)
        
        # Retrieve existing vector
        existing_vector = self.get_vector_by_id(vec_id)
        
        if existing_vector is None:
            self.update_vector(input_normalized, vec_id)
            self.CACHE_MISS += 1
            # self.countbrank += 1
            return True
        time1 = time.time()

        # Calculate cosine similarity via dot product
        similarity = np.dot(input_normalized.flatten(), existing_vector.flatten())
        # self.simi_record.append(similarity)
        time2 = time.time()
        print("time:",time2-time1)
        
        if similarity < self.similarity_threshold:
            self.CACHE_MISS += 1
            self.update_vector(input_normalized, vec_id, value)
            return True
        self.CACHE_HIT += 1
        return False

    def search(self, query, k=3):
        # Normalize query vector for proper cosine similarity search
        query_normalized = self._normalize(query.astype(np.float32))
        distances, indices = self.index.search(query_normalized, k)
        return distances, indices

    def get_index_size(self):
        return self.index.ntotal
    
    def get_cache_stat(self):
        # print("similarity record:",self.simi_record)
        # print("inital miss count:",self.countbrank)
        return self.CACHE_HIT, self.CACHE_MISS



class FFTCL():
    def __init__(self, n0, n1, n2, detw, deth, ntheta, dim1=96,dim2=144, index_type="flat", nlist=10, n1c=None, dethc=None, nthetac=None,usfft1d_encoder=None):
        self.comm = 1
        self.rank = 1
        self.size = 1

        # if MPI is not None:
        # if "MPI" in sys.modules and MPI is not None:
        self.__init_mpi__()  
          
        cp.cuda.set_pinned_memory_allocator(cp.cuda.PinnedMemoryPool().malloc)
        self.n0 = n0
        self.n1 = n1
        self.n2 = n2
        self.detw = detw
        self.deth = deth
        self.ntheta = ntheta
        self.nworkers = 1

        self.deth_worker = deth//(self.nworkers*self.size)
        self.n1_worker = dethc//(self.n1*self.size)
        cp.cuda.Device(0).use() 

        if n1c == None:
            self.n1c = n1
        else:
            self.n1c = n1c

        if dethc == None:
            self.dethc = deth
        else:
            self.dethc = dethc

        if nthetac == None:
            self.nthetac = ntheta
        else:
            self.nthetac = nthetac

        self.cl_usfft1d = usfft1d(self.n0, self.n1c, self.n2, self.deth)
        self.cl_usfft2d = usfft2d(
                self.dethc, self.n1, self.n2, self.ntheta, self.detw, self.dethc)  # n0 becomes deth
        

        #to scale the usfft1d to multi-GPUs, class usfft1d is instantiated for each GPU
        self.cl_usfft1d_list = []
        for i in range(self.nworkers):
            with cp.cuda.Device(i).use():
                cl_usfft1d = usfft1d(self.n0, self.n1c, self.n2, self.deth)
                self.cl_usfft1d_list.append(cl_usfft1d)


        # to scale the usfft2d to multi-GPUs, class usfft2d is instantiated for each GPU
        self.cl_usfft2d_list = []
        for i in range(self.nworkers):
            with cp.cuda.Device(i).use():
                cl_usfft2d = usfft2d(
                    self.dethc, self.n1, self.n2, self.ntheta, self.detw, self.dethc)
                self.cl_usfft2d_list.append(cl_usfft2d)
                
        cp.cuda.Device(0).use()
        self.cl_fft2d = fft2d(self.nthetac, self.detw, self.deth)
        pinned_block_size = max(self.n1*self.n0*self.n2, self.n1*self.deth*self.n2, self.ntheta*self.deth*self.detw)
        gpu_block_size = max(self.n1c*self.n0*self.n2, self.n1c*self.deth*self.n2, self.n1*self.dethc*self.n2,self.dethc*self.ntheta*self.detw,self.nthetac*self.deth*self.detw)
        self.pinned_block_size = pinned_block_size
        
        # reusable pinned memory blocks
        self.pab0 = utils.pinned_array(np.empty(pinned_block_size,dtype='complex64'))
        self.pab1 = utils.pinned_array(np.empty(pinned_block_size,dtype='complex64'))
        self.pab2 = utils.pinned_array(np.empty(pinned_block_size,dtype='complex64'))
        self.pab3 = utils.pinned_array(np.empty(pinned_block_size,dtype='complex64'))


        # pointers (no memory allocation)
        self.pa0 =  self.pab0[:self.n1*self.n0*self.n2].reshape(self.n1, self.n0, self.n2)
        self.pa1 =  self.pab1[:self.n1*self.deth*self.n2].reshape(self.n1,self.deth,self.n2)
        self.pa2 =  self.pab0[:self.ntheta*self.deth*self.detw].reshape(self.ntheta,self.deth,self.detw)
        self.pa3 =  self.pab1[:self.ntheta*self.deth*self.detw].reshape(self.ntheta,self.deth,self.detw)

        
        # reusable gpu memory blocks
        self.gb0 = cp.empty(2*gpu_block_size,dtype='complex64')
        self.gb1 = cp.empty(2*gpu_block_size,dtype='complex64')
        self.gb2 = cp.empty(2*gpu_block_size,dtype='complex64')
        # self.gb_out= cp.empty(self.ntheta*self.deth*self.detw,dtype='complex64').reshape(self.ntheta,self.deth,self.detw)
        
        # pointers (no memory allocation)
        self.ga0 = self.gb0[:2*self.n1c*self.n0*self.n2].reshape(2,self.n1c,self.n0,self.n2)
        self.ga1 = self.gb1[:2*self.n1c*self.deth*self.n2].reshape(2,self.n1c,self.deth,self.n2)
        self.ga2 = self.gb0[:2*self.n1*self.dethc*self.n2].reshape(2,self.n1,self.dethc,self.n2)
        self.ga3 = self.gb1[:2*self.dethc*self.ntheta*self.detw].reshape(2,self.ntheta,self.dethc,self.detw)
        self.ga4 = self.gb0[:2*self.nthetac*self.deth*self.detw].reshape(2,self.nthetac,self.deth,self.detw)
        self.ga5 = self.gb1[:2*self.nthetac*self.deth*self.detw].reshape(2,self.nthetac,self.deth,self.detw)
        # gaD for data, subtracted from ga3 by chunking in GPU usfft2d
        self.gaD = self.gb2[:2*self.dethc*self.ntheta*self.detw].reshape(2,self.ntheta,self.dethc,self.detw)


        # streams for overlapping data transfers with computations
        self.stream1 = cp.cuda.Stream(non_blocking=False)
        self.stream2 = cp.cuda.Stream(non_blocking=False)
        self.stream3 = cp.cuda.Stream(non_blocking=False)
        self.stream4 = cp.cuda.Stream(non_blocking=False)

        '''
        Encoders for usfft1d, usfft2d
        '''
        self.usfft1d_fwd_encoder = Complex2vec(input_channels=2*self.n1c, num_features=dim1).to(device)
        try:
            # self.usfft1d_fwd_encoder.load_state_dict(torch.load(usfft1d_encoder))
            self.usfft1d_fwd_encoder.load_state_dict(torch.load("/*/usfft1d_fwd_8_model.pth"))
            print("usfft1d_fwd_encoder loaded")
        except:
            print("usfft1d_fwd_encoder not loaded, use usfft1d_fwd_encoder computation")
        
        self.usfft1d_fwd_cache_index = FaissVectorDB(dimension=dim1, index_type=index_type, nlist=nlist, similarity_threshold=0.85)
        self.usfft1d_fwd_cache_value = None       
        # self.faiss_manager = DistributedFaissManager(dimension=40, index_key='IVFFlat', local_id=0, remote_id=1, nlist=10)
        self.usfft2d_fwd_cache_index = FaissVectorDB(dimension=dim2, index_type=index_type, nlist=nlist, similarity_threshold=0.85)

        
    def __init_mpi__(self):
        """
        Initialize MPI and set communicator, rank, and size as instance attributes.
        """
        if "MPI" in sys.modules:
            # raise ImportError("MPI module not found. Please install mpi4py.")
            self.comm = MPI.COMM_WORLD
            self.rank = self.comm.Get_rank()
            self.size = self.comm.Get_size()

    def __del__(self):
        # Finalize MPI when the FFTCL instance is destroyed
        try:
            import sys
            if "MPI" in sys.modules and MPI is not None:
                MPI.Finalize()
        except Exception as e:
            print(f"Error during MPI finalization: {e}")
        
    def __enter__(self):
        """Return self at start of a with-block."""
        return self

    def __exit__(self, type, value, traceback):
        """Free GPU memory due at interruptions or with-block exit."""
        if self.nworkers > 1:
            for cl_usfft1d in self.cl_usfft1d_list:
                cl_usfft1d.free()
            for cl_usfft2d in self.cl_usfft2d_list:
                cl_usfft2d.free()
        # self.cl_usfft1d.free()
        else:  
            self.cl_usfft1d.free()
            self.cl_usfft2d.free()

    '''
    This one for test/inference 
    '''
    def usfft1d_chunks(self, out_t, inp_t, out_gpu, inp_gpu, phi, direction='fwd',iter_id=None,liter=None):        
        #the chunk size is n1c    
        nchunk = int(np.ceil(self.n1/self.n1c))
        for k in range(nchunk+2):
            if(k > 0 and k < nchunk+1):
                with self.stream2:
                    if direction == 'fwd':
                        self.cl_usfft1d.fwd(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr, phi, self.stream2.ptr)
                    else:
                        self.cl_usfft1d.adj(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr, phi, self.stream2.ptr)
            if(k > 1):
                with self.stream3:  # gpu->cpu copy
                    st, end = (k-2)*self.n1c, min(self.n1,(k-1)*self.n1c)
                    s = end-st
                    if direction == 'adj':
                        out_gpu[(k - 2) % 2, :s] /= (self.deth * self.detw)
                    out_gpu[(k-2)%2,:s].get(out=out_t[st:end])# contiguous copy, fast      
            if(k<nchunk):
                with self.stream1:  # cpu->gpu copy
                    st, end = k*self.n1c, min(self.n1,(k+1)*self.n1c)
                    s = end-st
                    inp_gpu[k%2,:s].set(inp_t[st:end])# contiguous copy, fast
            self.stream1.synchronize()
            self.stream2.synchronize()
            self.stream3.synchronize()
            
            
    def usfft1d_chunks_boost(self, out_t, inp_t, out_gpu, inp_gpu, phi, direction='fwd',iter_id=None,liter=None):        
        #the chunk size is n1c    
        nchunk = int(np.ceil(self.n1/self.n1c))
        cache_hit_values = {} 
        cache_miss_blocks = set()  
        
        for k in range(nchunk+2):
            if(k > 0 and k < nchunk+1):
                current_block = k - 1
                if current_block not in cache_hit_values:
                    with self.stream2:
                        if direction == 'fwd':
                            self.cl_usfft1d.fwd(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr, phi, self.stream2.ptr)
                        else:
                            self.cl_usfft1d.adj(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr, phi, self.stream2.ptr)
            if(k > 1):
                current_output_block = k - 2
                with self.stream3:  # gpu->cpu copy
                    if current_output_block in cache_hit_values:
                            value = cache_hit_values.pop(current_output_block)
                            st = current_output_block * self.n1c
                            end = min(self.n1, (current_output_block + 1) * self.n1c)
                            out_t[st:end] = value
                    else:         
                        st, end = (k-2)*self.n1c, min(self.n1,(k-1)*self.n1c)
                        s = end-st
                        if direction == 'adj':
                            out_gpu[(k - 2) % 2, :s] /= (self.deth * self.detw)
                        out_gpu[(k-2)%2,:s].get(out=out_t[st:end])# contiguous copy, fast  
                        
                        if current_output_block in cache_miss_blocks:
                            value = out_t[st:end].copy()
                            self.usfft1d_fwd_cache_index.vector_values[current_output_block] = value
                            cache_miss_blocks.remove(current_output_block)
                         
            if(k<nchunk):
                with self.stream1:  # cpu->gpu copy
                    st, end = k*self.n1c, min(self.n1,(k+1)*self.n1c)
                    s = end-st
                    chunk = inp_t[st:end]
                    # if ENCODE_1d == True:
                    usfft1d_key = self.usfft1d_chunks_encoding(chunk,direction)
                    usfft1d_key= usfft1d_key.reshape(1, usfft1d_key.shape[-1])
                    # print("usfft1d_key:",usfft1d_key)
                    # print(usfft1d_key.shape)
                    #check and update the cache
                    # caching = self.usfft1d_fwd_cache_index.check_and_update_vector(usfft1d_key, k) 
                    existing_value = self.usfft1d_fwd_cache_index.get_value_by_id(k)
                    if existing_value is not None:
                        cache_hit_values[k] = existing_value

                    cache_miss = self.usfft1d_fwd_cache_index.check_and_update_vector(usfft1d_key, k)
                    
                    # self.usfft1d_fwd_cache_index.update_vector(usfft1d_key, k)
                    if cache_miss:
                        cache_miss_blocks.add(k)
                    # print("usfft1d_key:",usfft1d_key)
                    inp_gpu[k%2,:s].set(inp_t[st:end])# contiguous copy, fast
            self.stream1.synchronize()
            self.stream2.synchronize()
            self.stream3.synchronize()

    def usfft1d_chunks_boost_memo(self, out_t, inp_t, out_gpu, inp_gpu, phi, direction='fwd', iter_id=None, liter=None):
        # Initialize distributed Faiss manager if not already done
        if not hasattr(self, 'faiss_manager'):
            # Dimension should match the size of your encoding vectors (from usfft1d_chunks_encoding)
            self.faiss_manager = DistributedFaissManager(dimension=96, index_key='IVFFlat', local_id=0, remote_id=1, nlist=10)
            # Track distributed cache performance
            self.distributed_hits = 0
            self.distributed_misses = 0
            
        # The chunk size is n1c    
        nchunk = int(np.ceil(self.n1/self.n1c))
        cache_hit_values = {} 
        cache_miss_blocks = set()  # Track blocks needing computation
        # Store encoding keys for later use when storing results
        encoding_keys = {}
        
        for k in range(nchunk+2):
            if k > 0 and k < nchunk+1:
                current_block = k - 1
                if current_block not in cache_hit_values:
                    with self.stream2:
                        if direction == 'fwd':
                            self.cl_usfft1d.fwd(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr, phi, self.stream2.ptr)
                        else:
                            self.cl_usfft1d.adj(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr, phi, self.stream2.ptr)
                            
            if k > 1:
                current_output_block = k - 2
                with self.stream3:  # gpu->cpu copy
                    if current_output_block in cache_hit_values:
                        # Cache hit case - use cached value directly
                        value = cache_hit_values.pop(current_output_block)
                        st = current_output_block * self.n1c
                        end = min(self.n1, (current_output_block + 1) * self.n1c)
                        out_t[st:end] = value
                        self.distributed_hits += 1
                        print(f"Distributed cache hit for block {current_output_block}")
                    else:         
                        # Cache miss case - copy from GPU to CPU
                        st, end = (k-2)*self.n1c, min(self.n1,(k-1)*self.n1c)
                        s = end-st
                        if direction == 'adj':
                            out_gpu[(k-2)%2, :s] /= (self.deth * self.detw)
                        out_gpu[(k-2)%2,:s].get(out=out_t[st:end])  # contiguous copy, fast
                        
                        # If this block was marked for storing in cache, do so now
                        if current_output_block in cache_miss_blocks:
                            value = out_t[st:end].copy()
                            key = encoding_keys.get(current_output_block)
                            if key is not None:
                                # Store result in distributed cache
                                data_to_store = (key, value)
                                self.faiss_manager.store_and_send_non_blocking(data_to_store, current_output_block)
                                print(f"Stored block {current_output_block} in distributed cache")
                            cache_miss_blocks.remove(current_output_block)
                            del encoding_keys[current_output_block]  # Clean up
                            
            if k < nchunk:
                with self.stream1:  # cpu->gpu copy
                    st, end = k*self.n1c, min(self.n1,(k+1)*self.n1c)
                    s = end-st
                    chunk = inp_t[st:end]
                    
                    # Encode chunk for vector search
                    usfft1d_key = self.usfft1d_chunks_encoding(chunk, direction)
                    usfft1d_key = usfft1d_key.reshape(1, usfft1d_key.shape[-1])
                    
                    # Store encoding key for later use
                    encoding_keys[k] = usfft1d_key
                    
                    # Query distributed cache
                    query_tag = self.faiss_manager.send_query(usfft1d_key)
                    
                    try:
                        # Try to get result from distributed cache
                        serialized_result = self.faiss_manager.receive_query_result(query_tag)
                        result_value = pickle.loads(serialized_result)
                        cache_hit_values[k] = result_value
                    except Exception as e:
                        # Cache miss - mark for computation and future storage
                        print(f"Distributed cache miss for block {k}: {e}")
                        cache_miss_blocks.add(k)
                        self.distributed_misses += 1
                    
                    # Always prepare GPU data (in case computation is needed)
                    inp_gpu[k%2,:s].set(inp_t[st:end])  # contiguous copy, fast
                    
            # Synchronize all streams
            self.stream1.synchronize()
            self.stream2.synchronize()
            self.stream3.synchronize()
        
        # Ensure all non-blocking operations have completed
        self.faiss_manager.wait_for_requests()
        
        # Report cache statistics (optional)
        print(f"Distributed cache stats - Hits: {self.distributed_hits}, Misses: {self.distributed_misses}")
        
        return out_t


            
    def usfft1d_chunks_encoding(self,chunk,direction='fwd'):
        real_part = np.ascontiguousarray(np.real(chunk), dtype=np.float32)
        imag_part = np.ascontiguousarray(np.imag(chunk), dtype=np.float32)
        
        # build a new empty，store the results， 16 = 8*2
        combined = np.empty((real_part.shape[0]*2, real_part.shape[1], real_part.shape[2]), dtype=np.float32)
        # interleaved padding：index 0,2,4,... get real, 1,3,5,... get image
        combined[0::2] = real_part
        combined[1::2] = imag_part
        # add one batch dimension and get (1, 16, 384, 1152)
        combined= combined[np.newaxis, :]
        combined = torch.tensor(combined, dtype=torch.float32).to(device)
        if direction == 'fwd':
            # usfft1d_key = self.usfft1d_fwd_encoder(torch.tensor(combined, dtype=torch.float32).to(device))
            usfft1d_key = nn.AdaptiveAvgPool2d((3, 3))(combined).flatten(1)
            # print("usfft1d_key shape:",usfft1d_key.shape) 
        else:
        # usfft1d_key = self.usfft1d_fwd_encoder(torch.tensor(combined, dtype=torch.float32).to(device))
            print("usfft1d_fwd_encoder under testing")
        usfft1d_key = usfft1d_key.detach().cpu().numpy()
        return usfft1d_key

                                     
    def usfft2d_chunks(self, out, inp, out_gpu, inp_gpu, theta, phi, direction='fwd'):
        cp.cuda.Device(0).use() 
        theta = cp.array(theta)        
        # nchunk = self.deth//self.dethc
        nchunk = int(np.ceil(self.deth/self.dethc))
        print("nchunk:",nchunk)
        for k in range(nchunk+2):  
            # print("k:",k)        
            if(k > 0 and k < nchunk+1):
                with self.stream2:
                    if direction == 'fwd':
                        self.cl_usfft2d.fwd(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr,theta.data.ptr, phi, k-1, self.deth, self.stream2.ptr)
                    else:
                        self.cl_usfft2d.adj(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr,theta.data.ptr, phi, k-1, self.deth, self.stream2.ptr)
                    
            if(k > 1):
                with self.stream3:  # gpu->cpu copy
                    for j in range(out.shape[0]):# non-contiguous copy, slow but comparable with gpu computations
                        st, end = (k-2)*self.dethc, min(self.deth,(k-1)*self.dethc)
                        s = end-st
                        out_gpu[(k-2)%2,j,:s].get(out=out[j,st:end])   
            if(k<nchunk):
                with self.stream1:  # cpu->gpu copy
                    for j in range(inp.shape[0]):
                        st, end = k*self.dethc, min(self.deth,(k+1)*self.dethc)
                        s = end-st
                        inp_gpu[k%2,j,:s].set(inp[j,st:end])# non-contiguous copy, slow but comparable with gpu computations)                    
            self.stream1.synchronize()
            self.stream2.synchronize()
            self.stream3.synchronize()  

    def usfft2d_chunks_2stp(self, out, inp, out_gpu, inp_gpu,theta , phi, direction='fwd', data=None , data_gpu=None):
        # cp.cuda.Device(0).use() 
        theta = cp.array(theta)   
        nchunk = int(np.ceil(self.deth/self.dethc))
        print("nchunk:",nchunk)
        for k in range(nchunk+2):  
            # print("k:",k)        
            if(k > 0 and k < nchunk+1):
                with self.stream2:
                    if direction == 'fwd':
                        self.cl_usfft2d.fwd(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr,theta.data.ptr, phi, k-1, self.deth, self.stream2.ptr)
                        #TODO: out_gpu = out_gpu - data_gpu
                        out_gpu[(k-1)%2] = out_gpu[(k-1)%2]- data_gpu[(k-1)%2]
                    else:
                        self.cl_usfft2d.adj(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr,theta.data.ptr, phi, k-1, self.deth, self.stream2.ptr)
                    
            if(k > 1):
                with self.stream3:  # gpu->cpu copy
                    for j in range(out.shape[0]):# non-contiguous copy, slow but comparable with gpu computations
                        st, end = (k-2)*self.dethc, min(self.deth,(k-1)*self.dethc)
                        s = end-st
                        out_gpu[(k-2)%2,j,:s].get(out=out[j,st:end])   
            if(k<nchunk):
                with self.stream1:  # cpu->gpu copy
                    for j in range(inp.shape[0]):
                        st, end = k*self.dethc, min(self.deth,(k+1)*self.dethc)
                        s = end-st
                        # print("inp.shape:",type(inp))   
                        inp_gpu[k%2,j,:s].set(inp[j,st:end])# non-contiguous copy, slow but comparable with gpu computations)   
                if direction == 'fwd':
                    with self.stream4:
                        for j in range(data.shape[0]):
                            st, end = k*self.dethc, min(self.deth,(k+1)*self.dethc)
                            s = end-st
                            data_gpu[k%2,j,:s].set(data[j,st:end])
            self.stream1.synchronize()
            self.stream2.synchronize()
            self.stream3.synchronize() 
            self.stream4.synchronize()

    def usfft2d_chunks_2stp_boost(self, out, inp, out_gpu, inp_gpu,theta , phi, direction='fwd', data=None , data_gpu=None):
        # cp.cuda.Device(0).use() 
        theta = cp.array(theta)   
        nchunk = int(np.ceil(self.deth/self.dethc))
        print("nchunk:",nchunk)
        cache_hit_values = {} 
        cache_miss_blocks = set() 
        
        for k in range(nchunk+2):  
            # print("k:",k)        
            if(k > 0 and k < nchunk+1):
                current_block = k - 1
                if current_block not in cache_hit_values:
                    with self.stream2:
                        if direction == 'fwd':
                            self.cl_usfft2d.fwd(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr,theta.data.ptr, phi, k-1, self.deth, self.stream2.ptr)
                            #TODO: out_gpu = out_gpu - data_gpu
                            out_gpu[(k-1)%2] = out_gpu[(k-1)%2]- data_gpu[(k-1)%2]
                        else:
                            self.cl_usfft2d.adj(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr,theta.data.ptr, phi, k-1, self.deth, self.stream2.ptr)
                    
            if(k > 1):
                current_output_block = k - 2
                with self.stream3:  # gpu->cpu copy
                    if current_output_block in cache_hit_values:
                        print("cache hit, skip compute for k:",k-2)
                        value = cache_hit_values.pop(current_output_block)
                        st = current_output_block * self.n1c
                        end = min(self.n1, (current_output_block + 1) * self.n1c)
                        out[:,st:end] = value
                    else:
                        for j in range(out.shape[0]):# non-contiguous copy, slow but comparable with gpu computations
                            st, end = (k-2)*self.dethc, min(self.deth,(k-1)*self.dethc)
                            s = end-st
                            out_gpu[(k-2)%2,j,:s].get(out=out[j,st:end]) 
                        if current_output_block in cache_miss_blocks:
                            value = out[:,st:end].copy()
                            self.usfft2d_fwd_cache_index.vector_values[current_output_block] = value
                            cache_miss_blocks.remove(current_output_block)
                        
            if(k<nchunk):
                with self.stream1:  # cpu->gpu copy
                    st, end = k*self.dethc, min(self.deth,(k+1)*self.dethc)
                    s = end-st
                    chunk = inp[:,st:end]
                    # print("chunk shape:",chunk.shape)
                    usfft2d_key = self.usfft2d_chunks_encoding(chunk,direction)
                    usfft2d_key= usfft2d_key.reshape(1, usfft2d_key.shape[-1])
                    # print("usfft2d_key shape:",usfft2d_key.shape)
                    existing_value = self.usfft2d_fwd_cache_index.get_value_by_id(k)
                    # self.usfft2d_fwd_cache_index.check_and_update_vector(usfft2d_key, k)
                    if existing_value is not None:
                        # 缓存命中，记录value
                        cache_hit_values[k] = existing_value
                    
                    cache_miss = self.usfft2d_fwd_cache_index.check_and_update_vector(usfft2d_key, k)
                    for j in range(inp.shape[0]):           
                        inp_gpu[k%2,j,:s].set(inp[j,st:end])# non-contiguous copy, slow but comparable with gpu computations)  
                         
                if direction == 'fwd':
                    with self.stream4:
                        for j in range(data.shape[0]):
                            st, end = k*self.dethc, min(self.deth,(k+1)*self.dethc)
                            s = end-st
                            data_gpu[k%2,j,:s].set(data[j,st:end])
            self.stream1.synchronize()
            self.stream2.synchronize()
            self.stream3.synchronize() 
            self.stream4.synchronize()

    def usfft2d_chunks_2stp_boost_memo(self, out, inp, out_gpu, inp_gpu, theta, phi, direction='fwd', data=None, data_gpu=None):
        # Initialize distributed Faiss manager if not already done
        if not hasattr(self, 'faiss_manager'):
            # Create distributed manager for vector keys with dimension 144
            self.faiss_manager = DistributedFaissManager(dimension=144, index_key='IVFFlat', local_id=0, remote_id=1, nlist=10)
        
        theta = cp.array(theta)   
        nchunk = int(np.ceil(self.deth/self.dethc))
        print("nchunk:", nchunk)
        
        cache_hit_values = {}
        cache_miss_blocks = set()
        # Track encoding keys for each block
        encoding_keys = {}
        
        for k in range(nchunk+2):
            if k > 0 and k < nchunk+1:
                current_block = k - 1
                if current_block not in cache_hit_values:
                    with self.stream2:
                        if direction == 'fwd':
                            self.cl_usfft2d.fwd(out_gpu[(k-1)%2].data.ptr, 
                                            inp_gpu[(k-1)%2].data.ptr,
                                            theta.data.ptr, 
                                            phi, 
                                            k-1, 
                                            self.deth, 
                                            self.stream2.ptr)
                            # Subtract data from output
                            out_gpu[(k-1)%2] = out_gpu[(k-1)%2] - data_gpu[(k-1)%2]
                        else:
                            self.cl_usfft2d.adj(out_gpu[(k-1)%2].data.ptr, 
                                            inp_gpu[(k-1)%2].data.ptr,
                                            theta.data.ptr, 
                                            phi, 
                                            k-1, 
                                            self.deth, 
                                            self.stream2.ptr)
            
            if k > 1:
                current_output_block = k - 2
                with self.stream3:  # gpu->cpu copy
                    if current_output_block in cache_hit_values:
                        print("cache hit, skip compute for k:", k-2)
                        # Use cached value from distributed manager
                        value = cache_hit_values.pop(current_output_block)
                        st = current_output_block * self.dethc
                        end = min(self.deth, (current_output_block + 1) * self.dethc)
                        for j in range(out.shape[0]):
                            out[j, st:end] = value[j]
                    else:
                        # Normal flow - copy results from GPU to CPU
                        for j in range(out.shape[0]):
                            st, end = (k-2)*self.dethc, min(self.deth, (k-1)*self.dethc)
                            s = end-st
                            out_gpu[(k-2)%2, j, :s].get(out=out[j, st:end])
                        
                        # If this was a cache miss, store the result in distributed cache
                        if current_output_block in cache_miss_blocks:
                            key = encoding_keys.get(current_output_block)
                            if key is not None:
                                st, end = (k-2)*self.dethc, min(self.deth, (k-1)*self.dethc)
                                value = out[:, st:end].copy()
                                # Send computed value to distributed manager
                                data_to_store = (key, value)
                                self.faiss_manager.store_and_send_non_blocking(data_to_store, k-2)
                                cache_miss_blocks.remove(current_output_block)
                                del encoding_keys[current_output_block]  # Clean up
            
            if k < nchunk:
                with self.stream1:  # cpu->gpu copy
                    st, end = k*self.dethc, min(self.deth, (k+1)*self.dethc)
                    s = end-st
                    chunk = inp[:, st:end]
                    
                    # Encode chunk for vector search
                    usfft2d_key = self.usfft2d_chunks_encoding(chunk, direction)
                    usfft2d_key = usfft2d_key.reshape(1, usfft2d_key.shape[-1])
                    
                    # Store encoding key for later use
                    encoding_keys[k] = usfft2d_key
                    
                    # Query the distributed manager
                    query_tag = self.faiss_manager.send_query(usfft2d_key)
                    
                    try:
                        # Attempt to retrieve from distributed cache
                        serialized_result = self.faiss_manager.receive_query_result(query_tag)
                        result_value = pickle.loads(serialized_result)
                        cache_hit_values[k] = result_value
                        print(f"Distributed cache hit for block {k}")
                    except Exception as e:
                        # Cache miss - mark for computation and future storage
                        print(f"Distributed cache miss for block {k}: {e}")
                        cache_miss_blocks.add(k)
                    
                    # Always prepare input data in case computation is needed
                    for j in range(inp.shape[0]):
                        inp_gpu[k%2, j, :s].set(inp[j, st:end])
                
                if direction == 'fwd':
                    with self.stream4:
                        # Set up the data for computation
                        for j in range(data.shape[0]):
                            st, end = k*self.dethc, min(self.deth, (k+1)*self.dethc)
                            s = end-st
                            data_gpu[k%2, j, :s].set(data[j, st:end])
                
                self.stream1.synchronize()
                self.stream2.synchronize()
                self.stream3.synchronize()
                self.stream4.synchronize()
        
        # Ensure all non-blocking operations complete
        self.faiss_manager.wait_for_requests()
        
        # Track cache statistics
        self.distributed_hits = len(cache_hit_values)
        self.distributed_misses = len(cache_miss_blocks)
        return out


    def usfft2d_chunks_encoding(self,chunk,direction='fwd'):

        real_part = np.ascontiguousarray(np.real(chunk), dtype=np.float32)
        imag_part = np.ascontiguousarray(np.imag(chunk), dtype=np.float32)
        # build a new empty，store the results， 16 = 8*2
        combined = np.empty((real_part.shape[0], real_part.shape[1]*2, real_part.shape[2]), dtype=np.float32)
        # interleaved padding：index 0,2,4,... get real, 1,3,5,... get image
        combined[:,0::2] = real_part
        combined[:,1::2] = imag_part
        # add one batch dimension and get (1, 384,16, 1152)
        combined= combined[np.newaxis, :]
        combined = torch.tensor(combined, dtype=torch.float32).to(device)
        #transpose dimension to (1, 16, 384, 1152)
        combined=combined.permute(0, 2, 1, 3)
        # print("combined shape:",combined.shape)
        if direction == 'fwd':
            # usfft1d_key = self.usfft1d_fwd_encoder(torch.tensor(combined, dtype=torch.float32).to(device))
            usfft1d_key = nn.AdaptiveAvgPool2d((3, 3))(combined).flatten(1)
            # print("usfft2d_key shape:",usfft1d_key.shape)
        else:
        # usfft1d_key = self.usfft1d_fwd_encoder(torch.tensor(combined, dtype=torch.float32).to(device))
            print("usfft1d_fwd_encoder under testing")
        usfft1d_key = usfft1d_key.detach().cpu().numpy()
        return usfft1d_key
        

    def usfft1_chunks_single_gpu(self, out_t, inp_t, out_gpu_z, inp_gpu_z, phi, gpu_id, direction='fwd'):
        nchunk = int(np.ceil(self.n1_worker/self.n1c))
        
        with cp.cuda.Device(gpu_id):
            # create streams
            stream1 = cp.cuda.Stream(non_blocking=False)
            stream2 = cp.cuda.Stream(non_blocking=False)
            stream3 = cp.cuda.Stream(non_blocking=False)    
            out_gpu = cp.array(out_gpu_z)
            inp_gpu = cp.array(inp_gpu_z)
            for k in range(nchunk+2):
                if k > 0 and k < nchunk+1:
                    with stream2:
                        if direction == 'fwd':
                            self.cl_usfft1d_list[gpu_id].fwd(out_gpu[(k-1)%2].data.ptr, 
                                            inp_gpu[(k-1)%2].data.ptr, 
                                            phi, 
                                            stream2.ptr)
                        else:
                            self.cl_usfft1d_list[gpu_id].adj(out_gpu[(k-1)%2].data.ptr, 
                                            inp_gpu[(k-1)%2].data.ptr, 
                                            phi, 
                                            stream2.ptr)
                if k > 1:
                    with stream3:
                        # gpu->cpu copy
                        st, end = (k-2)*self.n1c, min(self.n1,(k-1)*self.n1c)
                        s = end-st
                        out_gpu[(k-2)%2,:s].get(out=out_t[st:end])
                if k < nchunk:
                    with stream1:
                        # cpu->gpu copy
                        st, end = k*self.n1c, min(self.n1,(k+1)*self.n1c)
                        s = end-st
                        inp_gpu[k%2,:s].set(inp_t[st:end])
            stream1.synchronize()
            stream2.synchronize()
            stream3.synchronize()


    

    def usfft1_chunks_multi_gpus(self, out_t, inp_t, out_gpu, inp_gpu, phi, direction='fwd'):
        nworkers = self.nworkers
        thread_list = []
        chunk_size = self.n1 // nworkers
        
        for gpu_id in range(nworkers):
            start = gpu_id * chunk_size
            end = start + chunk_size if gpu_id < nworkers-1 else self.n1

            local_inp = inp_t[start:end]
            local_out = out_t[start:end]
            
            th = Thread(target=self.usfft1_chunks_single_gpu,
                    args=(local_out, local_inp, out_gpu, inp_gpu, phi, gpu_id, direction))
            thread_list.append(th)
            th.start()
        for th in thread_list:
            th.join()


    def usfft2_chunks_single_gpu(self, out, inp, out_gpu_z, inp_gpu_z,theta, phi,gpu_id,data,direction='fwd'):
        # nchunk = int(np.ceil(self.ntheta_worker/self.nthetac))
        nchunk = int(np.ceil(self.deth_worker/self.dethc))
        with cp.cuda.Device(gpu_id):
            theta = cp.array(theta)
            stream1 = cp.cuda.Stream(non_blocking=False)
            stream2 = cp.cuda.Stream(non_blocking=False)
            stream3 = cp.cuda.Stream(non_blocking=False)
            stream4 = cp.cuda.Stream(non_blocking=False)
            out_gpu= cp.array(out_gpu_z)
            inp_gpu= cp.array(inp_gpu_z)
            if direction == 'fwd':
                data_gpu = cp.array(out_gpu_z)
            for k in range(nchunk+2):            
                if(k > 0 and k < nchunk+1):
                    with stream2:
                        if direction == 'fwd':
                            self.cl_usfft2d_list[gpu_id].fwd(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr, theta.data.ptr, phi, k-1, self.deth_worker, stream2.ptr)
                            out_gpu[(k-1)%2] = out_gpu[(k-1)%2]- data_gpu[(k-1)%2]
                        else:
                            self.cl_usfft2d_list[gpu_id].adj(out_gpu[(k-1)%2].data.ptr, inp_gpu[(k-1)%2].data.ptr, theta.data.ptr, phi, k-1, self.deth_worker, stream2.ptr)
                if(k > 1):
                    with stream3:
                        for j in range(out.shape[0]):# non-contiguous copy, slow but comparable with gpu computations
                            st, end = (k-2)*self.dethc, min(self.deth_worker,(k-1)*self.dethc)
                            s = end-st
                            out_gpu[(k-2)%2,j,:s].get(out=out[j,st:end])   
                if(k<nchunk):
                    with stream1: 
                        for j in range(inp.shape[0]):
                            st, end = k*self.dethc, min(self.deth_worker,(k+1)*self.dethc)
                            s = end-st
                            inp_gpu[k%2,j,:s].set(inp[j,st:end]) #non-contiguous copy, slow but comparable with gpu computations)
                    if direction == 'fwd':
                        with stream4:
                            for j in range(data.shape[0]):
                                st, end = k*self.dethc, min(self.deth_worker,(k+1)*self.dethc)
                                s = end-st
                                data_gpu[k%2,j,:s].set(data[j,st:end])
                        
                stream1.synchronize()
                stream2.synchronize()
                stream3.synchronize()
                stream4.synchronize()
    
    def usfft2_chunks_multi_gpus(self, out, inp, out_gpu, inp_gpu, theta, phi, data=None, direction='fwd'):
        nworkers = self.nworkers   
        thread_list = []

        # print("inp.shape:",inp.shape)
        # print("out.shape:",out.shape)
        for gpu_id in range(nworkers):
            newin  = inp[:,self.deth_worker*gpu_id:(self.deth_worker)*(gpu_id+1),:]
            newout = out[:,self.deth_worker*gpu_id:(self.deth_worker)*(gpu_id+1),:]
            if direction == 'fwd':
                dataG = data[:,self.deth_worker*gpu_id:(self.deth_worker)*(gpu_id+1),:]
            else:
                dataG = None
            # print("newin.shape:",newin.shape)
            # print("newout.shape:",newout.shape)
            th = Thread(target=self.usfft2_chunks_single_gpu,args=(newout,newin,out_gpu,inp_gpu,theta, phi,gpu_id, dataG, direction))
            thread_list.append(th)
            th.start()

        for th in thread_list:
            th.join()
            
        # cp.cuda.Device(0).use() 

  
    # @profile    
    def fwd_lam(self, u, theta, phi,iter_id=0,liter=0):
        
        utils.copy(u,self.pa0)
        # step 1: 1d batch usffts in the z direction to the grid ku*sin(phi)
        # input [self.n1, self.n0, self.n2], output [self.n1, self.deth, self.n2]
        self.usfft1d_chunks(self.pa1,self.pa0,self.ga1,self.ga0, phi, direction='fwd',iter_id=iter_id,liter=liter)                        
        # step 2: 2d batch usffts in [x,y] direction to the grid ku*cos(theta)+kv * sin(theta)*cos(phi)
        # input [self.n1, self.deth, self.n2], output [self.ntheta, self.deth, self.detw]
        # print("norm of pa1:",np.linalg.norm(self.pa1.flatten()))
        time_start = time.time()
        self.usfft2d_chunks(self.pa2, self.pa1, self.ga3, self.ga2, theta, phi, direction='fwd')
        time_end = time.time()
        # self.usfft2_chunks_multi_gpus(self.pa2, self.pa1, self.ga3, self.ga2, theta, phi, direction='fwd')
        # step 3: 2d batch fft in [det x,det y] direction
        # input [self.ntheta, self.deth, self.detw], output [self.ntheta, self.deth, self.detw]
        self.fft2_chunks(self.pa3, self.pa2, self.ga5, self.ga4, direction='adj')
        # print("fft2_chunks done")
        data = utils.copy(self.pa3)
        # data = np.copy(self.pa3)
        # print("gradients copied")
        return data


    def fwd_lam_v2(self, u, theta, phi,data,iter_id=0,liter=0):
        utils.copy(u,self.pa0)
        self.usfft1d_chunks(self.pa1,self.pa0,self.ga1,self.ga0, phi, direction='fwd',iter_id=iter_id,liter=liter)  
        # print("norm of pa1:",np.linalg.norm(self.pa1.flatten()))        
                      
        self.usfft2d_chunks_2stp(self.pa2, self.pa1, self.ga3, self.ga2, theta, phi, direction='fwd', data = data , data_gpu = self.gaD)
        # self.usfft2d_chunks_v2(self.gb_out, self.pa1, self.ga3, self.ga0, theta, phi, direction='fwd')
        return self.pa2

    def adj_lam_v2(self, data, theta, phi):
        # utils.copy(data,self.pa2)
        self.usfft2d_chunks_2stp(self.pa1, data, self.ga2, self.ga3, theta, phi, direction='adj')
        # self.usfft2d_chunks_v2(self.pa1, data, self.ga0, self.ga1, theta, phi, direction='adj')
        self.usfft1d_chunks(self.pa0,self.pa1,self.ga0,self.ga1, phi, direction='adj')
        u=utils.copy(self.pa0)
        return u
    
    def fwd_lam_v3(self, u, theta, phi,data,iter_id=0,liter=0):
        utils.copy(u,self.pa0)
        self.usfft1d_chunks(self.pa1,self.pa0,self.ga1,self.ga0, phi, direction='fwd',iter_id=0,liter=liter) 
        # print("norm of pa1:",np.linalg.norm(self.pa1.flatten()))                          
        self.usfft2_chunks_multi_gpus(self.pa2, self.pa1, self.ga3, self.ga2, theta, phi, data, direction='fwd')
        # print("usfft2_chunks_multi_gpus done in ",end_t-start_t)
        # self.usfft2d_chunks_v2(self.gb_out, self.pa1, self.ga3, self.ga0, theta, phi, direction='fwd')
        return self.pa2
    
    def adj_lam_v3(self, data, theta, phi):
        # utils.copy(data,self.pa2)
        self.usfft2_chunks_multi_gpus(self.pa1, data, self.ga2, self.ga3, theta, phi, data,direction='adj')
        # self.usfft2d_chunks_v2(self.pa1, data, self.ga0, self.ga1, theta, phi, direction='adj')
        self.usfft1d_chunks(self.pa0,self.pa1,self.ga0,self.ga1, phi, direction='adj')
        u=utils.copy(self.pa0)
        return u



    def fwd_lam_nn(self, u, theta, phi,data,iter_id=0,liter=0):

        utils.copy(u,self.pa0)
        self.usfft1d_chunks_boost(self.pa1,self.pa0,self.ga1,self.ga0, phi, direction='fwd',iter_id=iter_id,liter=liter)  
        # print("norm of pa1:",np.linalg.norm(self.pa1.flatten()))        
        # print("index size:  ",self.usfft1d_fwd_cache_index.get_index_size())    
        # self.usfft2d_chunks_2stp(self.pa2, self.pa1, self.ga3, self.ga2, theta, phi, direction='fwd', data = data , data_gpu = self.gaD)
        self.usfft2d_chunks_2stp_boost(self.pa2, self.pa1, self.ga3, self.ga2, theta, phi, direction='fwd', data = data , data_gpu = self.gaD)
        # self.usfft2d_chunks_v2(self.gb_out, self.pa1, self.ga3, self.ga0, theta, phi, direction='fwd')
        return self.pa2
    
    def adj_lam_nn(self, data, theta, phi):
        # utils.copy(data,self.pa2)
        self.usfft2d_chunks_2stp(self.pa1, data, self.ga2, self.ga3, theta, phi, direction='adj')
        # self.usfft2d_chunks_v2(self.pa1, data, self.ga0, self.ga1, theta, phi, direction='adj')
        self.usfft1d_chunks(self.pa0,self.pa1,self.ga0,self.ga1, phi, direction='adj')
        u=utils.copy(self.pa0)
        return u


    def fwd_lam_nodes(self, u, theta, phi,data,iter_id=0,liter=0):
        utils.copy(u,self.pa0)
        # print("time start")
        t1 = time.time()
        # self.usfft1_chunks_multi_gpus(self.pa1, self.pa0, self.ga1, self.ga0, phi, direction='fwd')
        self.usfft1d_multi_node_gpu(self.pa1, self.pa0, self.ga1, self.ga0, phi, direction='fwd')
        print("usfft1d_multi_node_gpu fwd time ", time.time()-t1)
        t2 = time.time()
        # self.usfft2d_multi_node_gpu(self.pa2, self.pa1, self.ga3, self.ga2, theta, phi, data, direction='fwd')
        self.usfft2_chunks_multi_gpus(self.pa2, self.pa1, self.ga3, self.ga2, theta, phi, data, direction='fwd')
        print("usfft2d_multi_node_gpu fwd time ", time.time()-t2)


        return self.pa2
    
    def adj_lam_nodes(self, data, theta, phi):
        # utils.copy(data,self.pa2)
        t1 = time.time()
        self.usfft2d_multi_node_gpu(self.pa1, data, self.ga2, self.ga3, theta, phi, data, direction='adj')
        # self.usfft2_chunks_multi_gpus(self.pa1, data, self.ga2, self.ga3, theta, phi, data,direction='adj')
        print("usfft2d_multi_node_gpu adj time ", time.time()-t1)
        t2 = time.time()
        # self.usfft1d_chunks(self.pa0,self.pa1,self.ga0,self.ga1, phi, direction='adj')
        # self.usfft1_chunks_multi_gpus(self.pa0,self.pa1,self.ga0,self.ga1, phi, direction='adj')
        self.usfft1d_multi_node_gpu(self.pa0, self.pa1, self.ga0, self.ga1, phi, direction='adj')
        print("usfft1d_multi_node_gpu adj time ", time.time()-t2)
        u=utils.copy(self.pa0)
        return u

    # @profile
    def adj_lam(self, data, theta, phi,iter_id=0,liter=0):
        utils.copy(data,self.pa3)
        #steps 1,2,3 of the fwd operator but in reverse order
        self.fft2_chunks(self.pa2, self.pa3, self.ga4, self.ga5, direction='fwd')
        print("fft2_chunks done")
        time_start = time.time()
        self.usfft2d_chunks(self.pa1, self.pa2, self.ga2, self.ga3, theta, phi, direction='adj')
        time_end = time.time()
        print("usfft2d_chunks adj done in ",time_end-time_start)
        # self.usfft2_chunks_multi_gpus(self.pa1, self.pa2, self.ga2, self.ga3, theta, phi, direction='adj')
        print("usfft2d_chunks done")
        self.usfft1d_chunks(self.pa0,self.pa1,self.ga0,self.ga1, phi, direction='adj')  
        u = utils.copy(self.pa0)
        # u = np.copy(self.pa0)
        return u
    
    def _linear_operation_axis0(self,out,x,y,a,b,st,end):
        out[st:end] = a*x[st:end]+b*y[st:end]        
    
    def _linear_operation_axis1(self,out,x,y,a,b,st,end):
        out[:,st:end] = a*x[:,st:end]+b*y[:,st:end]  

    # @profile
    def linear_operation(self,x,y,a,b,axis=0,nthreads=96,out=None,dbg=False):
        """ out = ax+by"""
        if out is None:
            print("out is None")
            out = np.empty_like(x)
        mthreads = []
        # nchunk = x.shape[axis]//nthreads
        nchunk = int(np.ceil(x.shape[axis]/nthreads))
        if axis==0:
            fun = self._linear_operation_axis0
        elif axis==1:
            fun = self._linear_operation_axis1
        for k in range(nthreads):   
            th = Thread(target=fun,args=(out,x,y,a,b,k*nchunk,min(x.shape[axis],(k+1)*nchunk)))
            mthreads.append(th)
            th.start()
        for th in mthreads:
            th.join()
        return out                   

    def _fwd_reg(self, res, u, st, end):                
        res[0, st:end, :, :-1] = u[st:end, :, 1:]-u[st:end, :, :-1]
        res[1, st:end, :-1, :] = u[st:end, 1:, :]-u[st:end, :-1, :]
        end0 = min(u.shape[0]-1,end)
        res[2, st:end0, :, :] = u[1+st:1+end0, :, :]-u[st:end0, :, :]
        res[:,st:end] *=1/np.sqrt(3)
    
    def fwd_reg(self, u, nthreads=96):
        ##Fast version:
        res = np.zeros([3, *u.shape], dtype='complex64')
        nchunk = int(np.ceil(u.shape[0]/nthreads))
        mthreads = []
        for k in range(nthreads):
            th = Thread(target=self._fwd_reg,args=(res,u,k*nchunk,min((k+1)*nchunk,u.shape[0])))
            mthreads.append(th)
            th.start()
        for th in mthreads:
            th.join()
        return res
    
    ####Parallel version
    def _adj_reg0(self, res, gr, st, end):
        res[st:end, :, 1:] = gr[0, st:end, :, 1:]-gr[0, st:end, :, :-1]
        res[st:end, :, 0] = gr[0, st:end, :, 0]
        
    def _adj_reg1(self, res, gr, st, end):        
        res[st:end, 1:, :] += gr[1, st:end, 1:, :]-gr[1, st:end, :-1, :]
        res[st:end, 0, :] += gr[1, st:end, 0, :]
        
    def _adj_reg2(self, res, gr, st, end):                
        end0 = min(gr.shape[1]-1,end)
        res[1+st:1+end0, :, :] += gr[2, 1+st:1+end0, :, :]-gr[2, st:end0, :, :]        
        res[1+st:1+end0] *= -1/np.sqrt(3)  # normalization
        if st==0:
            res[0, :, :] += gr[2, 0, :, :]
            res[0, :, :] *= -1/np.sqrt(3)  # normalization
    
    def adj_reg(self, gr, nthreads=96):
        ##Fast version:
        res = np.zeros(gr.shape[1:], dtype='complex64')
        nchunk = int(np.ceil(gr.shape[1]/nthreads))
        mthreads = []
        print("multithreading adj_reg")
        for fun in [self._adj_reg0,self._adj_reg1,self._adj_reg2]:
            for k in range(nthreads):
                th = Thread(target=fun,args=(res,gr,k*nchunk,min((k+1)*nchunk,gr.shape[1])))
                mthreads.append(th)
                th.start()
            for th in mthreads:
                th.join()
        return res
    
    def _soft_thresholding(self,z,alpha,rho,st,end):
        za = np.sqrt(np.real(np.sum(z[:,st:end]*np.conj(z[:,st:end]), 0)))
        cond = (za > alpha/rho)
        z[:,st:end][:, ~cond] = 0
        z[:,st:end][:, cond] -= alpha/rho * \
            z[:,st:end][:, cond]/(za[cond])
        
    def soft_thresholding(self,z,alpha,rho,nthreads=96):
        # nchunk = self.n1//nthreads
        nchunk = int(np.ceil(self.n1/nthreads))
        mthreads = []
        for k in range(nthreads):
            th = Thread(target=self._soft_thresholding,args=(z,alpha,rho,k*nchunk,min(self.n1,(k+1)*nchunk)))
            mthreads.append(th)
            th.start()
        for th in mthreads:
            th.join()
        return z
        
    # @profile
    def solve_reg(self, u, lamd, rho, alpha):
        """ Regularizer problem"""
        ##Fast version:
        z = self.fwd_reg(u)
        self.linear_operation(z,lamd,1,1.0/rho,axis=1,out=z)        
        z = self.soft_thresholding(z,alpha,rho)        
        return z

    def _update_penalty(self, rres, sres, psi, h, h0, rho, st, end, id):
        """Update rho for a faster convergence"""
        # rho
        tmp = psi[st:end] - h[st:end]
        rres[id] += np.real(np.sum(tmp*np.conj(tmp)))
        tmp = rho*(h[st:end]-h0[st:end])
        sres[id] += np.real(np.sum(tmp*np.conj(tmp)))
            
    def update_penalty(self, psi, h, h0, rho, nthreads=96):
        """Update rhofor a faster convergence"""
        rres = np.zeros(nthreads,dtype='float64')
        sres = np.zeros(nthreads,dtype='float64')
        mthreads = []
        # nchunk = self.n1//nthreads
        nchunk = int(np.ceil(self.n1/nthreads))
        
        for j in range(3):
            for k in range(nthreads):
                th = Thread(target=self._update_penalty,args=(rres,sres,psi[j], h[j],h0[j],rho,k*nchunk,min(self.n1,(k+1)*nchunk),k))
                th.start()
                mthreads.append(th)
            for th in mthreads:
                th.join()
        r = np.sum(rres)            
        s = np.sum(sres)         
        if (r > 10*s):
            rho *= 2
        elif (s > 10*r):
            rho *= 0.5
        return rho
    
    def gradL(self,grad,u,data,theta,phi,iter_id,liter=0):
        data_hat = self.fwd_lam(u,theta, phi,iter_id,liter)
        # time1 = time.time()
        difference= data_hat-data
        # time2 = time.time()
        # print("fwd_lam done in ",time2-time1)
        print("subtraction done")
        grad[:]=self.adj_lam(difference,theta,phi,iter_id,liter)
        print("gradL done")
    
    def gradL_nn(self,grad,u,data,theta,phi,iter_id,liter=0):
        difference= self.fwd_lam_nn(u,theta, phi,data,iter_id,liter)
        grad[:]=self.adj_lam_nn(difference,theta, phi)

        
    def gradL_v2(self,grad,u,data,theta,phi,iter_id,liter=0):
        difference= self.fwd_lam_v2(u,theta, phi,data,iter_id,liter)
        grad[:]=self.adj_lam_v2(difference,theta, phi)
        
    def gradL_v3(self,grad,u,data,theta,phi,iter_id,liter=0):
        time1 = time.time()
        difference= self.fwd_lam_v3(u,theta, phi,data,iter_id,liter)
        time2 = time.time()
        print("fwd_lam_v3 done in ",time2-time1)
        grad[:]=self.adj_lam_v3(difference,theta, phi)
        time3 = time.time()
        print("adj_lam_v3 done in ",time3-time2)
    
    def gradL_nodes(self,grad,u,data,theta,phi,iter_id,liter=0):
        difference= self.fwd_lam_nodes(u,theta, phi,data,iter_id,liter)
        grad[:]=self.adj_lam_nodes(difference,theta, phi)
            
    def gradG(self,gradG,u,g):
        time2 = time.time()
        gradG[:]=self.adj_reg(self.fwd_reg(u)-g)
        time3 = time.time()
        print("gradG done in ",time3-time2)


    '''
    The following functions are used to compute the gradient of the regularization term using GPU.
    '''    
    def fwd_reg_gpu(self,u_gpu):
        res = cp.zeros((3, *u_gpu.shape), dtype=u_gpu.dtype)
        res[0, :, :, :-1] = u_gpu[:, :, 1:] - u_gpu[:, :, :-1]
        res[1, :, :-1, :] = u_gpu[:, 1:, :] - u_gpu[:, :-1, :]
        res[2, :-1, :, :] = u_gpu[1:, :, :] - u_gpu[:-1, :, :]
        return res / cp.sqrt(3)

    def adj_reg_gpu(self, gr_gpu):
        res = cp.zeros(gr_gpu.shape[1:], dtype=gr_gpu.dtype)
        res[:, :, 1:] += gr_gpu[0, :, :, 1:] - gr_gpu[0, :, :, :-1]
        res[:, :, 0] += gr_gpu[0, :, :, 0]
        res[:, 1:, :] += gr_gpu[1, :, 1:, :] - gr_gpu[1, :, :-1, :]
        res[:, 0, :] += gr_gpu[1, :, 0, :]
        res[1:, :, :] += gr_gpu[2, 1:, :, :] - gr_gpu[2, :-1, :, :]
        res[0, :, :] += gr_gpu[2, 0, :, :]
        return -res / cp.sqrt(3)

    def process_batch(self, args):
        gpu_id, u_chunk, g_chunk = args
        with cp.cuda.Device(gpu_id):
            stream = cp.cuda.Stream(non_blocking=True)
            with stream:
                u_gpu = cp.asarray(u_chunk)
                g_gpu = cp.asarray(g_chunk)
                
                gradG_fwd = self.fwd_reg_gpu(u_gpu)
                gradG_chunk = self.adj_reg_gpu(gradG_fwd - g_gpu)
                
                return cp.asnumpy(gradG_chunk)

    def compute_gradG_multi_gpu(self, gradG, u, g, num_gpus=4):
        total_size = u.shape[0]
        batch_size = min(100, total_size // num_gpus)
        num_batches = (total_size + batch_size - 1) // batch_size

        with ThreadPoolExecutor(max_workers=num_gpus) as executor:
            for batch_start in range(0, total_size, batch_size * num_gpus):
                futures = []
                for i in range(num_gpus):
                    start = batch_start + i * batch_size
                    end = min(start + batch_size, total_size)
                    if start >= total_size:
                        break
                    futures.append(executor.submit(self.process_batch, (i, u[start:end], g[:, start:end])))

                for i, future in enumerate(futures):
                    start = batch_start + i * batch_size
                    end = min(start + batch_size, total_size)
                    gradG[start:end] = future.result()

        return gradG

    def gradG_gpu_multi(self, gradG, u, g, num_gpus=4):
        # print("shape of u:",u.shape)
        time1 = time.time()
        gradG_fwd = self.fwd_reg_gpu_multi(u, num_gpus)
        time2 = time.time()
        print("fwd_reg_gpu_multi done in ",time2-time1)
        gradG[:]= self.adj_reg_gpu_multi_optimized(gradG_fwd - g, num_gpus)
        time3 = time.time()
        print("adj_reg_gpu_multi done in ",time3-time2)
        

    def _dai_yuan_dividend(self,res,grad,st,end,id):
        res[id] = np.sum(grad[st:end]*np.conj(grad[st:end]))
    
    def _dai_yuan_divisor(self,res,grad,grad0,d,st,end,id):
        res[id] = np.sum(np.conj(d[st:end])*(-grad[st:end]+grad0[st:end]))
        
    def dai_yuan_alpha(self,grad,grad0,d,nthreads=64):        
        res = np.zeros(nthreads,dtype='complex64')
        mthreads = []
        # nchunk = grad.shape[0]//nthreads
        nchunk = int(np.ceil(grad.shape[0]/nthreads))
        for k in range(nthreads):
            th = Thread(target=self._dai_yuan_dividend,args=(res,grad,k*nchunk,min(grad.shape[0],(k+1)*nchunk),k))
            th.start()
            mthreads.append(th)
        
        for th in mthreads:
            th.join()
        dividend = np.sum(res)
        
        mthreads = []
        for k in range(nthreads):
            th = Thread(target=self._dai_yuan_divisor,args=(res,grad,grad0,d,k*nchunk,min(grad.shape[0],(k+1)*nchunk),k))
            th.start()
            mthreads.append(th)
        
        for th in mthreads:
            th.join()
        divisor = np.sum(res)
        return dividend/(divisor+1e-32)
      

    # @profile
    def cg_lam_ext(self, data, g, init, theta, phi, rho, titer,liter, gamma=1, dbg=False, dbg_step=1):
        """extended CG solver for ||Lu-data||_2+rho||gu-g||_2"""
        # minimization functional
        def minf(Lu, gu):
            return np.linalg.norm(Lu-data)**2+rho*np.linalg.norm(gu-g)**2
        time0=time.time()
        u = utils.copy(init)
        # u=np.copy(init)
        del init
        grad = np.empty_like(u)
        gradG = np.empty_like(u)
        # u_prev = np.copy(u)
        time_copy=time.time()
        print("copy done in ",time_copy-time0)
        
        for i in range(titer):
            
            grad_thread = Thread(target=self.gradL_nn,args = (grad,u,data,theta, phi, i, liter))
            gradG_thread = Thread(target=self.gradG,args = (gradG,u,g))
            grad_thread.start()
            # gradG_thread.start()
            gradG_thread.start()
            grad_thread.join()

            gradG_thread.join() 

            time2= time.time()
            #Since we used the frequency domain for the gradients, we need to divide by the number of pixels, moved to usfft1d adj
            grad=grad/(self.deth*self.detw)      
            
            self.linear_operation(grad,gradG,-1,-rho,out=grad)  
            del gradG  # Delete gradG after use
            # gc.collect()
            # Dai-Yuan direction    
            time3= time.time()
            print("grad done in ",time3-time2)
            if i == 0:                
                d = utils.copy(grad)
            else:             
                ## Fast version:
                alpha = self.dai_yuan_alpha(grad,grad0,d)
                self.linear_operation(grad,d,1,alpha,out=d)
            time4= time.time()
            print("dai_yuan_alpha done in ",time4-time3)
            grad0 = utils.copy(grad)  
                                  
            self.linear_operation(u,d,1,gamma,out=u)


            time5 = time.time()
            print('Iteration %d, time: %.2f'%(i,time5-time0))
            # check convergence
            # print("convergence check: ",self.check_convergence(u, u_prev))
            # if dbg and i%dbg_step==0:  # dbg is disabled by default
            # if dbg:
            #     Lu = self.fwd_lam(u,theta, phi)
            #     gu = self.fwd_reg(u)
            #     print("%4d, gamma %.3e, fidelity %.7e" %
            #             (i, gamma, minf(Lu,gu)))
            
            gradG = np.empty_like(u)
            hit1,mis1 = self.usfft1d_fwd_cache_index.get_cache_stat()
            print("hit1: ",hit1," mis1: ",mis1)
            hit2,mis2 = self.usfft2d_fwd_cache_index.get_cache_stat()
            # print("hit2: ",hit2," mis2: ",mis2)
            # print("similarity record 1: ",self.usfft1d_fwd_cache_index.similarity_record)
            # print("similarity record 2: ",self.usfft2d_fwd_cache_index.similarity_record)

            #write hit miss to file for each iteration
            with open("hit_mis_private_1.txt", "a") as f:
                f.write(str(hit1)+","+str(mis1)+"\n")
            with open("hit_mis_private_2.txt", "a") as f:
                f.write(str(hit2)+","+str(mis2)+"\n")

        return u
    
  

    # @profile
    def admm(self, data, psi, lamd, u, theta, phi, alpha, titer, niter, gamma=1, dbg=True, dbg_step=1):
        """ ADMM for laminography problem with TV regularization"""
        rho = 0.5
        h = np.zeros([3,*u.shape],dtype='complex64')
        data_new= np.fft.fftshift(np.fft.fft2(np.fft.fftshift(data))).astype('complex64')

        for m in range(niter):
            # keep previous iteration for penalty updates
            time0 = time.time()
            h0 = utils.copy(h)
            # h0=np.copy(h)
            # laminography problem
            time1 = time.time()
            print('copy time: %.2f'%(time1-time0))
            # print("psi shape: ",psi.shape)
            # print("lamd shape: ",lamd.shape)

            #use linear operation to calculate psi-lamd/rho ,psi can store the result since it will be covered in the next step
            self.linear_operation(psi,lamd,1,-1/rho,out=psi)
            # u = self.cg_lam_ext(data, psi-lamd/rho, u, theta, phi, rho, titer,m, gamma, False)
            u = self.cg_lam_ext(data, psi, u, theta, phi, rho, titer,m, gamma, False)

            time2 = time.time()
            print('cg_lam_ext: %.2f'%(time2-time1))            
            # regularizer problem
            psi = self.solve_reg(u, lamd, rho, alpha)
            time3 = time.time()
            print('solve_reg: %.2f'%(time3-time2))
            # h updates
            h = self.fwd_reg(u)
            time4 = time.time()
            print('fwd_reg: %.2f'%(time4-time3))
            
            # lambda updates
            ##Fast version:
            self.linear_operation(lamd,h,1,rho,axis=1,out=lamd)
            self.linear_operation(lamd,psi,1,-rho,axis=1,out=lamd)
            time5 = time.time()
            print('lambda time: %.2f'%(time5-time4))
            
            # update rho for a faster convergence
            rho = self.update_penalty(psi, h, h0, rho)
            time5 = time.time()
            print('update_penalty time: %.2f'%(time5-time4))
            
            print('lambda time: %.2f'%(time4-time3))
            
            # Lagrangians difference between two iterations
            if dbg and m%dbg_step==0:
                lagr = self.take_lagr(
                    u, psi, data, h, lamd,theta, phi, alpha,rho)
                print("%d/%d) rho=%.2e, Lagrangian terms:   %.2e %.2e %.2e %.2e, Sum: %.2e" %
                        (m, niter, rho, *lagr))
            
        return u

    def admm_offload(self, data, psi, lamd, u, theta, phi, alpha, titer, niter, gamma=1, dbg=True, dbg_step=1):
        rho = 0.5
        h = np.zeros([3,*u.shape], dtype='complex64')
        data_new = np.fft.fftshift(np.fft.fft2(np.fft.fftshift(data))).astype('complex64')

        # Offload psi and lamd initially
        np.save('/local/scratch/psi.npy', psi)
        np.save('/local/scratch/lamd.npy', lamd)
        del psi, lamd

        for m in range(niter):
            # Save h to h0 and offload
            time0 = time.time()
            np.save('/local/scratch/h0.npy', h)
            del h
            time1 = time.time()
            print('h0 saving time: %.2f'%(time1-time0))
            # Load psi and lamd for cg_lam_ext
            psi = np.load('/local/scratch/psi.npy')
            lamd = np.load('/local/scratch/lamd.npy')
            time2 = time.time()
            print('psi and lamd loading time: %.2f'%(time2-time1))
            g=psi-lamd/rho
            del psi
            del lamd
            
            u = self.cg_lam_ext(data, g, u, theta, phi, rho, titer, m, gamma, False) #75s
            del g
            time3= time.time()
            print('cg_lam_ext: %.2f'%(time3-time2))
            
            # Solve regularizer problem
            lamd = np.load('/local/scratch/lamd.npy')
            psi = self.solve_reg(u, lamd, rho, alpha) #(9s） 
            np.save('/local/scratch/psi.npy', psi)
            del psi
            h = self.fwd_reg(u) #(1s）

            # Update lamd
            self.linear_operation(lamd, h, 1, rho, axis=1, out=lamd) #1.5s
            np.save('/local/scratch/h.npy',h)
            del h
            self.linear_operation(lamd, np.load('/local/scratch/psi.npy'), 1, -rho, axis=1, out=lamd) #1.5
            np.save('/local/scratch/lamd.npy', lamd)
            del lamd

            # Update penalty
            h0 = np.load('/local/scratch/h0.npy')
            psi = np.load('/local/scratch/psi.npy')
            h = np.load('/local/scratch/h.npy')
            rho = self.update_penalty(psi, h, h0, rho) #1s
            del h0, psi
        
        return u


    async def admm_offload_async(self, data, psi, lamd, u, theta, phi, alpha, titer, niter, gamma=1, dbg=True, dbg_step=1):
        rho = 0.5
        h = np.zeros([3, *u.shape], dtype='complex64')
        # initialize psi and lamd using async IO
        save_psi_task = asyncio.create_task(utils.async_save('/local/scratch/psi.npy', psi))
        save_lamd_task = asyncio.create_task(utils.async_save('/local/scratch/lamd.npy', lamd))
        # do not delete psi and lamd here, they are still needed
        # del psi, lamd
        for m in range(niter):
            # start h0 saving IO
            save_h0_task = asyncio.create_task(utils.async_save('/local/scratch/h0.npy', h))
            await save_h0_task
            del h

            if m == 0:
                await asyncio.gather(save_psi_task, save_lamd_task)

            else:
                psi, lamd = await asyncio.gather(load_psi_task, load_lamd_task)
            
            if psi is None or lamd is None:
                raise ValueError(f"Failed to load psi or lamd in iteration {m}")

            g = psi - lamd / rho
            del psi
            del lamd            
            # 
            cg_task = self.run_in_threadpool(self.cg_lam_ext, data, g, u, theta, phi, rho, titer, m, gamma, False)
            load_lamd_task = asyncio.create_task(utils.async_load('/local/scratch/lamd.npy'))            
            u = await cg_task
            del g

            lamd = await load_lamd_task
            if lamd is None:
                raise ValueError(f"Failed to load lamd for regularization in iteration {m}")
            psi = await self.run_in_threadpool(self.solve_reg, u, lamd, rho, alpha)
            save_psi_task = asyncio.create_task(utils.async_save('/local/scratch/psi.npy', psi))
            # start psi saving IO
            await save_psi_task
            del psi
            h = await self.run_in_threadpool(self.fwd_reg, u)
            # update lamd
            self.linear_operation(lamd, h, 1, rho, axis=1, out=lamd)
            save_h_task = asyncio.create_task(utils.async_save('/local/scratch/h.npy', h))
            await save_h_task
            del h
            self.linear_operation(lamd, psi, 1, -rho, axis=1, out=lamd)
            save_lamd_task = asyncio.create_task(utils.async_save('/local/scratch/lamd.npy', lamd))
            await save_lamd_task
            load_h0_task = asyncio.create_task(utils.async_load('/local/scratch/h0.npy'))
            h0 = await load_h0_task
            del lamd
            # update penalty
            # h = await save_h_task
            if h0 is None or h is None:
                raise ValueError(f"Failed to load h0 or h for penalty update in iteration {m}")
            rho = self.update_penalty(psi, h, h0, rho)
            del h0, psi
            # gc.collect()
            # preload psi and lamd for next iteration
            load_psi_task = asyncio.create_task(utils.async_load('/local/scratch/psi.npy'))
            load_lamd_task = asyncio.create_task(utils.async_load('/local/scratch/lamd.npy'))

        await asyncio.gather(save_psi_task, save_lamd_task)
        return u

    async def run_in_threadpool(self, func, *args, **kwargs):
        loop = asyncio.get_running_loop()
        with ThreadPoolExecutor() as pool:
            # 将 *args 和 **kwargs 传递给 func
            result = await loop.run_in_executor(pool, func, *args, **kwargs)
        return result

    # @profile
    def take_lagr(self, u, psi, data, h, lamd, theta, phi, alpha, rho):
        """ Lagrangian terms for monitoring convergence"""
        lagr = np.zeros(5, dtype="float32")
        Lu = self.fwd_lam(u,theta, phi)
        lagr[0] += np.linalg.norm(Lu-data)**2
        lagr[1] = alpha*np.sum(np.sqrt(np.real(np.sum(psi*np.conj(psi), 0))))        
        lagr[2] = np.sum(np.real(np.conj(lamd)*(h-psi)))        
        lagr[3] = rho*np.linalg.norm(h-psi)**2
        lagr[4] = np.sum(lagr[:4])
        return lagr

    def fft2_chunks(self, out, inp, out_gpu, inp_gpu, direction='fwd'):
        # nchunk = self.ntheta//self.nthetac
        # print(np.linalg.norm(inp[-1]))
        cp.cuda.Device(0).use() 
        nchunk = int(np.ceil(self.ntheta/self.nthetac))
        for k in range(nchunk+2):
            if(k > 0 and k < nchunk+1):
                with self.stream2:
                    if direction == 'fwd':
                        self.cl_fft2d.fwd(out_gpu[(k-1)%2].data.ptr,inp_gpu[(k-1)%2].data.ptr,self.stream2.ptr)
                    else:
                        self.cl_fft2d.adj(out_gpu[(k-1)%2].data.ptr,inp_gpu[(k-1)%2].data.ptr,self.stream2.ptr)
            if(k > 1):
                with self.stream3:  # gpu->cpu copy        
                    st, end = (k-2)*self.nthetac, min(self.ntheta,(k-1)*self.nthetac)
                    s = end-st
                    out_gpu[(k-2)%2, :s].get(out=out[st:end])# contiguous copy, fast                                        
                    
            if(k<nchunk):
                with self.stream1:  # cpu->gpu copy 
                    st, end = k*self.nthetac, min(self.ntheta,(k+1)*self.nthetac)
                    s = end-st
                    inp_gpu[k%2, :s].set(inp[st:end])# contiguous copy, fast      
            self.stream1.synchronize()
            self.stream2.synchronize()
            self.stream3.synchronize()