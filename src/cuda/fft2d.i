/*interface*/
%module fft2d

%{
#define SWIG_FILE_WITH_INIT
#include "fft2d.cuh"
%}

class fft2d {

public:  
  %mutable;  
  fft2d(size_t ntheta, size_t detw, size_t deth);
  ~fft2d();  
  void fwd(size_t g_, size_t f_, size_t stream_);
  void adj(size_t g_, size_t f_, size_t stream_);
  void free();
};