cmake_minimum_required(VERSION 3.6)
project(helloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

aux_source_directory(. DIR_SRCS)


add_executable(helloWorld ${DIR_SRCS} email/Folder.h email/Folder.cpp email/Message.h email/Message.cpp)

