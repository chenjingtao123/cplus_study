cmake_minimum_required(VERSION 3.6)
project(staic_dynamic_library)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp mylib/add.cpp mylib/add.h)
add_executable(staic_dynamic_library ${SOURCE_FILES})