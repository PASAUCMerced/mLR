from mpi4py import MPI
import numpy as np
import threading
import time
from lam_usfft.memo import DistributedFaissManager
import pickle
from threading import Thread

TERMINATION_TAG = 9999 
QUERY_BASE_TAG = 10000 
DATA_TERMINATION_TAG = 9998
QUERY_TERMINATION_TAG = 9997

def run_distributed_faiss_manager(local_id, remote_id):
    dimension = 64
    index_key = 'IVFFlat'
    nlist = 5

    # Create an instance of DistributedFaissManager on each node
    manager = DistributedFaissManager(dimension=dimension, index_key=index_key, nlist=nlist,local_id=local_id, remote_id=remote_id)

    if manager.comm.rank == manager.local_id:
        # Local node: generate random data and send it to the remote node
        sent_requests = []
        start_time = time.time()
        for i in range(220):
            key = np.random.random((dimension,)).astype(np.float32)
            value = np.random.random((400, 16, 700)).astype(np.complex64)
            data = (key, value)
            data_size = len(pickle.dumps(data))
            manager.set_size(data_size)
            print(f"Local node sending data #{i+1}")
            request=manager.store_and_send_non_blocking(data, i)
            sent_requests.append(request)
            # manager.comm.Barrier()
            time.sleep(0.2)
        end_time = time.time()


        # MPI.Request.Waitall(sent_requests)
        print("Local node sending termination signal")
        dummy_buffer = np.zeros(1, dtype=np.int32)
        manager.comm.Isend(dummy_buffer, dest=manager.remote_id, tag=DATA_TERMINATION_TAG)
        # manager.comm.Barrier()
        print(f"Time taken to send data: {end_time - start_time:.2f} seconds")
        
        # multiple queries
        for _ in range(50):  # 10 queries
            query_vector = np.random.random((dimension,)).astype(np.float32)
            query_tag = manager.send_query(query_vector)
            time.sleep(0.2)
            
            result = manager.receive_query_result(query_tag)
            # print(f"Query result: {result.shape}")

        print("Local node sending query termination signal")
        manager.comm.Isend(dummy_buffer, dest=manager.remote_id, tag=QUERY_TERMINATION_TAG)
        # manager.comm.Barrier()
        time.sleep(0.1)


    elif manager.comm.rank == manager.remote_id:
        print("Remote node: start receiving data")
        # def receive_thread():
        manager.manage_requests()
            
        # recv_thread = threading.Thread(target=receive_thread)
        # recv_thread.start()
        # recv_thread.join()

    # Wait for all non-blocking operations to complete
    manager.wait_for_requests()
    manager.comm.Barrier()
    
    time.sleep(0.1) 
    print(f"Rank {manager.rank}: Finished processing")
    manager.finalize()  

if __name__ == "__main__":
    # run_distributed_faiss_manager1 = run_distributed_faiss_manager(local_id = 0, remote_id = 1)
    # run_distributed_faiss_manager2 = run_distributed_faiss_manager(local_id = 0, remote_id = 2)
    k=16
    threads = []
    for i in range(k):
        thread = Thread(target=run_distributed_faiss_manager, args=(0, (i+1)))
        threads.append(thread)
        thread.start()
    for thread in threads:
        thread.join()
    print("All threads have finished.")



