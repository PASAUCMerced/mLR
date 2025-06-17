
import faiss
import pickle
from mpi4py import MPI
import numpy as np
import threading
import time 
import redis
import subprocess
# import time
import sys

TERMINATION_TAG = 9999 
QUERY_BASE_TAG = 10000
DATA_TERMINATION_TAG = 9998
QUERY_TERMINATION_TAG = 9997

class DistributedFaissManager:
    def __init__(self, dimension, index_key='IVFFlat', local_id=0, remote_id=1, nlist=10):
        self.dimension = dimension
        self.comm = MPI.COMM_WORLD
        self.rank = self.comm.Get_rank()
        self.size = self.comm.Get_size()
        self.local_id = local_id
        self.remote_id = remote_id
        self.index_key = index_key
        self.nlist = nlist
        # self.trained = False
        self.training_data = []     # List to accumulate data for training
        self.training_threshold = 195   # Number of samples required for training
        
        self.data_size = 100   # Size of the data buffer in bytes MPI
        self.query_counter = 0 # Counter for query tags

        # Flags for termination signals
        self.data_termination_received = False
        self.query_termination_received = False
        
        #set the pickle protocol to HIGHEST_PROTOCOL
        MPI.pickle.__init__(pickle.HIGHEST_PROTOCOL)
        
        # connection between vectorDB and MetadataDB
        self.current_key_id = 0
        
        # if self.size != 2:
        #     if self.rank == 0:
        #         print("This test requires exactly two processes")
        #     # MPI.Finalize()
        #     self.comm.Abort()
        #     return
        
        if self.size < 2:
            self.comm.Abort()
            return

        if self.comm.rank == self.local_id or self.comm.rank == self.remote_id:
            self.index = self.create_index(self.dimension, self.index_key)

        self.pending_requests = []
        self.received_data = []
        self.value_wait_train=[]
        # initialize the MetadataDB
        self.init_MetadataDB()

        print(f"Rank {self.rank}: DistributedFaissManager initialized")

    def start_redis_on_node(self,rank):
        redis_server_path = "/home/binkma/redis-6.2.6/src/redis-server"
        try:
            # Starting Redis server using a bash command
            subprocess.Popen([redis_server_path, '--daemonize', 'yes'],
                            stdout=subprocess.PIPE,
                            text=True,
                            shell=True)
            # Redis time to start
            time.sleep(2)
            print("Redis server started successfully.")
        except subprocess.CalledProcessError:
            print("Failed to start Redis server.")

    def init_MetadataDB(self):
        if self.comm.rank == self.remote_id:
            try:
                #open the redis server
                self.start_redis_on_node(self.comm.rank)
                #connect to redis
                self.MetadataDB = redis.Redis(host='localhost', port=6379, db=0)
                #ping the redis server
                try:
                    self.MetadataDB.ping()  # This will raise an exception if the connection fails  
                    print("Connected to DB")
                except redis.ConnectionError as e:
                    print(f"Redis connection error: {e}")
                    self.comm.Abort()
            except redis.ConnectionError as e:
                print(f"Redis connection error: {e}")
                self.comm.Abort()
    
    def set_size(self, size):
        self.data_size = size

    def create_index(self, dimension, index_key):
        if index_key == 'IVFFlat':
            # quantizer = faiss.IndexFlatL2(dimension)
            # index = faiss.IndexIVFFlat(quantizer, dimension, self.nlist, faiss.METRIC_L2)
            index = faiss.index_factory(dimension, f"IVF{self.nlist},Flat")
        else:
            index = faiss.index_factory(dimension, index_key)
        return index
    
    
    def add_training_key(self, data):
        self.training_data.append(data)
        if len(self.training_data) >= self.training_threshold:
            self.train_index(np.vstack(self.training_data))
            # print("index trained on rank: ", self.rank)
            self.training_data = []  # Reset training data after training 


    def train_index(self, training_data):
        if not self.index.is_trained:
            self.index.train(training_data)
            # self.trained = True
            print("Initial clusters has been trained on rank ", self.rank)
            #add the training data to the index
            num_vectors = training_data.shape[0]
            ids = np.arange(self.current_key_id, self.current_key_id + num_vectors)
            self.add_vectors_with_ids(training_data,ids)
            #add the value array to the MetadataDB
            for value in self.value_wait_train:
                self.MetadataDB.set(self.current_key_id, pickle.dumps(value))
                self.current_key_id += 1
            
    def add_vectors_with_ids(self, vectors, ids):
        if not self.index.is_trained:
            raise RuntimeError("Index must be trained before adding vectors.")
        self.index.add_with_ids(vectors, ids)
                   

    def store_and_send_non_blocking(self, data, tag):
        if self.comm.rank == self.local_id and tag != DATA_TERMINATION_TAG:
            if self.index.is_trained:  
                #local vecDB ready, add the key to the index , and send the data to the remote node
                key, _ = data
                self.index.add(key.reshape(1, -1))
            elif not self.index.is_trained:
                #local vecDB not ready, store the key for training
                key, _ = data
                self.add_training_key(key)    
                
            serialized_data = pickle.dumps(data,protocol=pickle.HIGHEST_PROTOCOL)
            # start_time = time.time()
            request = self.comm.Isend([serialized_data, MPI.BYTE], dest=self.remote_id, tag=tag)
            # end_time = time.time()
            self.pending_requests.append(request)
            print(f"Rank {self.rank}: Sent data with tag {tag}")
            # transmission_time = end_time - start_time
            # print(f"Rank {self.rank}: Value transmission time for tag {tag}: {transmission_time:.6f} seconds")

        elif self.comm.rank == self.local_id and tag == DATA_TERMINATION_TAG:
            request = self.comm.Isend([np.zeros(1), MPI.BYTE], dest=self.remote_id, tag=tag)
            self.pending_requests.append(request)
            print(f"Rank {self.rank}: Sent termination signal")
          
            
    def start_receive_non_blocking(self, tag):
        if self.comm.rank == self.remote_id:
            status = MPI.Status()
            self.comm.Probe(source=self.local_id, tag=tag, status=status)
            message_size = status.Get_count(MPI.BYTE)
            serialized_data = bytearray(message_size)
            request = self.comm.Irecv([serialized_data, MPI.BYTE], source=self.local_id, tag=tag)
            self.pending_requests.append(request)
            request.Wait()
            data = pickle.loads(serialized_data)
            self.received_data.append((request, data))


    def check_and_store_data(self):
        if self.comm.rank == self.remote_id:
            print("length of received data: ", len(self.received_data)) 
            if len(self.received_data) > 0:
                request, data = self.received_data[0]
                print("request.Test(): ", request.Test())
                # start_time = time.time()
                if request.Test() and not self.index.is_trained:
                    # end_time = time.time()
                    # receive_time = end_time - start_time
                    # print(f"Rank {self.rank}: Value receive time: {receive_time:.6f} seconds")
                    
                    key,value=data
                    self.add_training_key(key)
                    self.value_wait_train.append(value)
                    print("Training data received, length of training data: ", len(self.training_data))
                elif request.Test() and self.index.is_trained:
                    key,value=data
                    #add with ids
                    num_vectors = 1
                    ids = np.arange(self.current_key_id, self.current_key_id + num_vectors)
                    self.add_vectors_with_ids(key.reshape(1,-1),ids)
                    #add the value array to the MetadataDB
                    self.MetadataDB.set(self.current_key_id, pickle.dumps(value))
                    self.current_key_id += 1
                self.pending_requests.remove(request)
                self.received_data.remove((request, data))
    

    def manage_requests(self):
        print(f"Rank {self.rank}: entering manage_requests")
        dummy_buffer = np.zeros(1, dtype=np.int32)
        while not (self.data_termination_received and self.query_termination_received):
            status = MPI.Status()
            if self.comm.Iprobe(source=self.local_id, tag=MPI.ANY_TAG, status=status):
                tag = status.Get_tag()
                if tag == DATA_TERMINATION_TAG:
                    print(f"Rank {self.rank}: received data termination message")
                    self.data_termination_received = True
                    #consume the data termination message
                    self.comm.Recv(dummy_buffer, source=self.local_id, tag=DATA_TERMINATION_TAG)
                    print(f"Rank {self.rank}: received data termination message")
                    # self.comm.Barrier()
                elif tag == QUERY_TERMINATION_TAG:
                    print(f"Rank {self.rank}: received query termination message")
                    self.query_termination_received = True
                    #consume the query termination message
                    self.comm.Recv(dummy_buffer, source=self.local_id, tag=QUERY_TERMINATION_TAG)
                elif QUERY_BASE_TAG <= tag < QUERY_BASE_TAG + 1000:  
                    self.process_query()
                else:
                    self.start_receive_non_blocking(tag=tag)
                    self.check_and_store_data()
            else:
                time.sleep(0.01)
        
        sys.stdout.flush()
        print(f"Rank {self.rank}: exiting manage_requests")

    def wait_for_requests(self):
        MPI.Request.Waitall(self.pending_requests) 
        self.pending_requests = [] 

    def finalize(self):
        if self.rank == self.remote_id and hasattr(self, 'MetadataDB'):
            self.MetadataDB.close()
        MPI.Finalize()

    def __del__(self):
        self.finalize()

    def send_query(self, query_vector):
        self.query_counter += 1
        query_tag = QUERY_BASE_TAG + self.query_counter
        self.comm.Isend(query_vector, dest=self.remote_id, tag=query_tag)
        print(f"Rank {self.rank}: Sent query vector with tag {query_tag}")
        return query_tag

    def receive_query_result(self, query_tag):
        status = MPI.Status()
        self.comm.Probe(source=self.remote_id, tag=query_tag, status=status)
        message_size = status.Get_count(MPI.BYTE)
        serialized_data = bytearray(message_size)
        time1 = time.time()
        self.comm.Irecv([serialized_data, MPI.BYTE], source=self.remote_id, tag=query_tag)
        time2 = time.time()
        print(f"Rank {self.rank}: Received result data for query with tag {query_tag}, time: {time2-time1}")
        # results = pickle.loads(serialized_data)
        
        print(f"Rank {self.rank}: Received results for query with tag {query_tag}")
        return serialized_data

    def process_query(self):
        status = MPI.Status()
        self.comm.Probe(source=self.local_id, tag=MPI.ANY_TAG, status=status)
        query_tag = status.Get_tag()
        
        query_vector = np.empty(self.dimension, dtype=np.float32)
        time1 = time.time()
        self.comm.Irecv(query_vector, source=self.local_id, tag=query_tag)
        time2 = time.time()
        print(f"Rank {self.rank}: Received query vector with tag {query_tag}, time: {time2-time1}")
        

        D, I = self.index.search(query_vector.reshape(1, -1), 1)
    
        time3 = time.time()
        print(f"Rank {self.rank}: Search time: {time3-time2}")
        
        index = I[0][0]
        print(f"Rank {self.rank}: Search index {index} for query with tag {query_tag}")

        
        key = str(index)
        value = pickle.loads(self.MetadataDB.get(key))
        serialized_result = pickle.dumps(value, protocol=pickle.HIGHEST_PROTOCOL)
        self.comm.Isend([serialized_result, MPI.BYTE], dest=self.local_id, tag=query_tag)
        print(f"Rank {self.rank}: Sent result data for query with tag {query_tag}")





