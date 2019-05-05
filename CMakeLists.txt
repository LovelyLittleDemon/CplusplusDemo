cmake_minimum_required(VERSION 3.13)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

add_executable(LeetCode main.cpp addlist/src/addlist.h addlist/src/addlist.cpp addsum/src/addsum.h addsum/src/addsum.cpp addsum/src/template_test.h addsum/src/template.cpp stuctalign/src/stuckalign.h)