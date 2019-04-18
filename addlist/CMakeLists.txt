cmake_minimum_required(VERSION 3.13)
project(addlist)

set(CMAKE_CXX_STANDARD 11)
include_directories(src/)

add_executable(addlist src/main.cpp src/addlist.cpp)