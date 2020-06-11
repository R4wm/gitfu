project(gitfu)
cmake_minimum_required(VERSION 3.5)

include(ExternalProject)
if (BUILD_APPS)
  ExternalProject_Add(submodule_is2
    SOURCE_DIR ${CMAKE_SOURCE_DIR}/sub/is2
    INSTALL_COMMAND ""
  )
endif()

find_package(Protobuf REQUIRED)
#################
# build options #
#################
option(FORTIFY "Fortify Source." OFF)
############
# messages #
############
message("-----------------------------------------------------------")
message(STATUS "Build Configuration:")
message("Found Protobuf: " "${Protobuf_FOUND}")
message("Protobuf_LIBRARY: " "${Protobuf_LIBRARY}")
message("Fortify: " "${FORTIFY}")
message("CMAKE_BINARY_DIR: ", "${CMAKE_BINARY_DIR}")
message("-----------------------------------------------------------")


macro(find_ubuntu_package output_var_prefix
    include_test_file
    library_test_file
    ubuntu_package
    ubuntu_build_package)
  #handle optional prefix_path arg
  if (${ARGC} EQUAL 6)
    set(prefix_path "${ARGN}")
    message(STATUS "Got prefix path: '${prefix_path} for package ${ubuntu_build_package}")
  endif()
endmacro(find_ubuntu_package)


#############
# Build IS2 #
#############
include(ExternalProject)
ExternalProject_Add(submodule_is2
  SOURCE_DIR ${CMAKE_SOURCE_DIR}/sub/is2
  INSTALL_COMMAND ""
  )

#adding util
add_subdirectory(util)
# find_ubuntu_package(LIBPROFILER google/profiler.h libprofiler.a google-perftools libgoogle-perftools-dev)
# find_ubuntu_package(LIBPCRE pcre.h libpcre.a libpcre.so libpcre3-dev)
