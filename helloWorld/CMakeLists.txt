cmake_minimum_required(VERSION 3.6)
project(helloWorld)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Student.h Student.cpp HasPtr.h HasPtr.cpp)
add_executable(helloWorld ${SOURCE_FILES})