cmake_minimum_required(VERSION 3.14)
project(test_basic)
enable_testing()
set(CMAKE_BUILD_TYPE Debug)
add_executable(
  test_prefix_sum
  test_prefix_sum.cpp
)
add_executable(
  test_array_of_difference
  test_array_of_difference.cpp
)
target_link_libraries(
    test_prefix_sum
    GTest::gtest_main
    basic
    common
)
target_link_libraries(
  test_array_of_difference
  GTest::gtest_main
  basic
  common
)
target_include_directories(test_prefix_sum PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(test_array_of_difference PUBLIC ${CMAKE_SOURCE_DIR}/include)

include(GoogleTest)
gtest_discover_tests(test_prefix_sum)
gtest_discover_tests(test_array_of_difference)

