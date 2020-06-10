cmake_minimum_required(VERSION 3.10)

project(stuff1 VERSION 2.23)

add_executable(stuff1 stuff.cc)

configure_file(TutorialConfig.h.in TutorialConfig.h)

target_include_directories(stuff1 PUBLIC
  "${PROJECT_BINARY_DIR}"
  )
