import numpy as np
from lam_usfft.fftcl import FFTCL
# import dxchange


bin = 4 # 2

# data_file = f'../../lam_usfft/data/data_brain_bin{bin}x{bin}.npy'
data_file = f'/*/data_brain_bin{bin}x{bin}.npy'
usfft1d_model = "./testfaiss/usfft1d_model.pth"

# rec_folder = f'/*/rec_admm_bin{bin}x{bin}'
data = np.load(data_file).astype('complex64')
# print(f'data shape = {data.shape}')

# data = np.random.randn(1200, 800, 1200).astype('complex64')

data = np.pad(data,((0,0),(0,0),(data.shape[2]//4,data.shape[2]//4)),'edge')
n0 = data.shape[1]
n1 = data.shape[2]
n2 = data.shape[2]
detw = data.shape[2]
deth = data.shape[1]
ntheta = data.shape[0]

print(f'data size (ntheta,deth,detw) = ({ntheta},{deth},{detw}) ')
print(f'reconstruction size (n0,n1,n2) = ({n0},{n1},{n2}) ')

n1c = 8
dethc = 32
nthetac = 25
phi = np.pi/2+20/180*np.pi# 20 deg w.r.t. the beam direction
theta = np.linspace(0, 2*np.pi, ntheta, endpoint=False).astype('float32')
gamma = 2


with FFTCL(n0, n1, n2, detw, deth, ntheta, n1c, dethc, nthetac) as slv:    
    u = np.zeros([n1,n0,n2],dtype='complex64')#reshaped
    psi = np.zeros([3,*u.shape],dtype='complex64')
        
    lamd = np.zeros([3,*u.shape],dtype='complex64')    
    niter = 5 #out loop
    liter = 3 #inner loop
    alpha = 2e-9
    u = slv.admm(data, psi, lamd, u, theta, phi, alpha, liter, niter, gamma, dbg=True,dbg_step=4,usfft1d_encoder = usfft1d_model)
    
    u = u.swapaxes(0,1)
    u = u[:,u.shape[1]//6:-u.shape[1]//6,u.shape[1]//6:-u.shape[1]//6]
    # dxchange.write_tiff_stack(u.real, f'{rec_folder}/u.tiff', overwrite=True)
    
    print(np.linalg.norm(u))