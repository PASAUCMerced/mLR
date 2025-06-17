enable_language(CUDA)
include_directories(${CMAKE_CUDA_TOOLKIT_INCLUDE_DIRECTORIES})

# These policies are related to SWIG python libraries naming
cmake_policy(SET CMP0078 NEW)
cmake_policy(SET CMP0086 NEW)
find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})

# SWIG requires the Python header
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_PATH})
# TODO: Is NumPy required?
# find_package(NumPy REQUIRED)
# include_directories(${NumPy_INCLUDE_DIRS})


# Must tell CMake that SWIG interface files are CXX files
set_source_files_properties(usfft1d.i PROPERTIES CPLUSPLUS ON)
swig_add_library(usfft1d LANGUAGE python SOURCES usfft1d.i usfft1d.cu)
swig_link_libraries(usfft1d cudart cufft)
set_target_properties(usfft1d PROPERTIES CUDA_ARCHITECTURES "60;72;75;80")
# set_target_properties(usfft1d PROPERTIES CUDA_ARCHITECTURES native)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/usfft1d.py" DESTINATION lam_usfft)
install(TARGETS usfft1d LIBRARY DESTINATION lam_usfft)

# Must tell CMake that SWIG interface files are CXX files
set_source_files_properties(usfft2d.i PROPERTIES CPLUSPLUS ON)
swig_add_library(usfft2d LANGUAGE python SOURCES usfft2d.i usfft2d.cu)
swig_link_libraries(usfft2d cudart cufft)
set_target_properties(usfft2d PROPERTIES CUDA_ARCHITECTURES "60;72;75;80")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/usfft2d.py" DESTINATION lam_usfft)
install(TARGETS usfft2d LIBRARY DESTINATION lam_usfft)

# Must tell CMake that SWIG interface files are CXX files
set_source_files_properties(fft2d.i PROPERTIES CPLUSPLUS ON)
swig_add_library(fft2d LANGUAGE python SOURCES fft2d.i fft2d.cu)
swig_link_libraries(fft2d cudart cufft)
set_target_properties(fft2d PROPERTIES CUDA_ARCHITECTURES "60;72;75;80")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/fft2d.py" DESTINATION lam_usfft)
install(TARGETS fft2d LIBRARY DESTINATION lam_usfft)