cmake_minimum_required(VERSION 3.14)
project(basic)

add_library(basic STATIC prefix_sum.cpp array_of_difference.cpp binary_search.cpp)
target_include_directories(basic PUBLIC ${CMAKE_SOURCE_DIR}/include)