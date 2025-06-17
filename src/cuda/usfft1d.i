/*interface*/
%module usfft1d

%{
#define SWIG_FILE_WITH_INIT
#include "usfft1d.cuh"
%}

class usfft1d {

public:  
  %mutable;  
  usfft1d(size_t n0, size_t n1, size_t n2, size_t deth);
  ~usfft1d();  
  void fwd(size_t g_, size_t f_, float phi, size_t stream_);
  void adj(size_t f_, size_t g_, float phi, size_t stream_);
  void free();
};