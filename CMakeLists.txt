project(gitfu)
cmake_minimum_required(VERSION 3.5)

include(ExternalProject)
if (BUILD_APPS)
  ExternalProject_Add(submodule_is2
    SOURCE_DIR ${CMAKE_SOURCE_DIR}/sub/is2
    INSTALL_COMMAND ""
  )
