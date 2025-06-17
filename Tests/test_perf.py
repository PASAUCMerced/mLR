import numpy as np
from lam_usfft.fftcl import FFTCL
import time
# from mpi4py import MPI

# bin = 3 # 2

# data_file = f'../../lam_usfft/data/data_brain_bin{bin}x{bin}.npy'
# data_file = f'/*/data_brain{bin}x{bin}.npy'
n0 = 1000
deth = 1000

n1 = 800
ntheta = 800

detw = 1000
n2 = 1000


# data = np.load(data_file).astype('complex64')
# print(f'data shape = {data.shape}')

# data = np.random.randn(1200, 800, 1200).astype('complex64')
f = np.random.randn(n1,n0,n2).astype('complex64')# shape [n1,n0,n2] is more optimal for computations
# f = np.pad(data,((0,0),(0,0),(data.shape[2]//4,data.shape[2]//4)),'edge')
# n0 = f .shape[1]
# n1 = f .shape[2]
# n2 = f .shape[2]
# detw = f .shape[2]
# deth = f .shape[1]
# ntheta = f .shape[0]

n1c =16
dethc = 16
nthetac = 16
phi = np.pi/2-30/180*np.pi
theta = np.linspace(0, 2*np.pi, ntheta, endpoint=True).astype('float32')
print(f'data size (ntheta,deth,detw) = ({ntheta},{deth},{detw}) ')
print(f'reconstruction size (n0,n1,n2) = ({n0},{n1},{n2}) ')
# 

# f[n1//4:3*n1//4,n0//4:3*n0//4,n2//4:3*n2//4] = 1

with FFTCL(n0, n1, n2, detw, deth, ntheta, dim1=144,dim2=144,index_type="flat", nlist=10, n1c=n1c, dethc=dethc, nthetac=nthetac) as slv: 
    for i in range(3):
        t = time.time()
        # data = slv.fwd_lam(f, theta, phi)
        # data = slv.fwd_lam_v3(f, theta, phi,f)
        data = slv.fwd_lam_nodes(f, theta, phi, f)
        # print(time.time()-t)
        t = time.time()
        # fr = slv.adj_lam(data, theta, phi)
        # fr = slv.adj_lam_v3(data, theta, phi) 
        fr = slv.adj_lam_nodes(data,theta,phi)
    # print(time.time()-t)
    # FFTCL.__del__
