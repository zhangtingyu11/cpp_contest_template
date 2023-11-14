cmake_minimum_required(VERSION 3.14)
project(mathematic)

add_library(mathematic STATIC fast_power.cpp)
target_include_directories(mathematic PUBLIC ${CMAKE_SOURCE_DIR}/include)