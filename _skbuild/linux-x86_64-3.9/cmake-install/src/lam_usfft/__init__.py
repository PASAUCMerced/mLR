from pkg_resources import get_distribution, DistributionNotFound

from lam_usfft.usfft1d import *
from lam_usfft.usfft2d import *
from lam_usfft.fft2d import *
# from multiLam.src.backup.fftcl_back import *
from lam_usfft.utils import *
try:
    __version__ = get_distribution(__name__).version
except DistributionNotFound:
    # package is not installed
    pass