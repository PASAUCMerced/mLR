# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "src/cuda/CMakeFiles/fft2d.dir/fft2dPYTHON_wrap.cxx"
  "src/cuda/CMakeFiles/usfft1d.dir/usfft1dPYTHON_wrap.cxx"
  "src/cuda/CMakeFiles/usfft2d.dir/usfft2dPYTHON_wrap.cxx"
  "src/cuda/fft2d.py"
  "src/cuda/usfft1d.py"
  "src/cuda/usfft2d.py"
  )
endif()
