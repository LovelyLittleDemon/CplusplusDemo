cmake_minimum_required(VERSION 3.13)
project(staticgrammar)

set(CMAKE_CXX_STANDARD 11)
include_directories(src/)

add_executable(staticgrammar src/main.cpp src/static_grammar.cpp)