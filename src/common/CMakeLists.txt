cmake_minimum_required(VERSION 3.14)
project(basic)

add_library(common STATIC compare.cpp single_max_min_function.cpp)
target_include_directories(common PUBLIC ${CMAKE_SOURCE_DIR}/include)