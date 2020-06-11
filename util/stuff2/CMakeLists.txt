cmake_minimum_required(VERSION 3.10)

project(gitfu VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


add_executable(GetIS2 getis2.cc)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_BINARY_DIR}
  ${CMAKE_SOURCE_DIR}/sub/is2/include
  )
message("-----------------------stuff2------------------")
message("CMAKE_CURRENT_SOURCE_DIR: " "${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_CURRENT_BINARY_DIR: " "${CMAKE_CURRENT_BINARY_DIR}")
message("CMAKE_BINARY_DIR: " "${CMAKE_BINARY_DIR}")
message("-----------------------stuff2------------------")
