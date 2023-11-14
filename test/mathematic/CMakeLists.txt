cmake_minimum_required(VERSION 3.14)
project(test_mathematic)
enable_testing()

add_executable(
  test_fast_power
  test_fast_power.cpp
)
target_link_libraries(
    test_fast_power
    GTest::gtest_main
    mathematic
)
target_include_directories(test_fast_power PUBLIC ${CMAKE_SOURCE_DIR}/include)
include(GoogleTest)
gtest_discover_tests(test_fast_power)
