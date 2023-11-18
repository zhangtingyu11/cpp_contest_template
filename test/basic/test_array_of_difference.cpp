#include "basic/array_of_difference.hpp"
#include "common/compare.hpp"
#include <gtest/gtest.h>

TEST(CalculateArrayOfDifferenceTest, BasicAssertions){
    vector<int> input0 = {0, 1, 2, 3, 4, 5};
    vector<int> gt0 = {0, 1, 1, 1, 1, 1, 0};
    vector<int> result0 = calculate_array_of_difference(input0, 5);
    EXPECT_TRUE(check_two_arrays_equal(result0, 7, gt0, 7));    

    vector<int> input1 = {0, 14541, 2123, 3213, 4438, 55646};
    vector<int> gt1 = {0, 14541, -12418, 1090, 1225, 51208, 0};
    vector<int> result1 = calculate_array_of_difference(input1, 5);
    EXPECT_TRUE(check_two_arrays_equal(result1, 7, gt1, 7));    
}

TEST(IntervalPlusTest, BasicAssertions){
    vector<int> input0 = {0, 1, 1, 1, 1, 1, 0};
    vector<vector<int>> ops0 = {
        {1, 5, 3},
        {2, 2, -1},
        {3, 4, 7}
    };
    vector<int> gt0 = {0, 4, 0, 9, 1, -6, -3};
    vector<int> result0 = interval_plus(ops0, input0, 5);
    EXPECT_TRUE(check_two_arrays_equal(result0, 7, gt0, 7));    

    vector<int> input1 = {0, 14541, -12418, 1090, 1225, 51208, 0};
    vector<vector<int>> ops1 = {
        {1, 5, 3},
        {2, 2, -1},
        {3, 4, 7}
    };
    vector<int> gt1 = {0, 14544, -12419, 1098, 1225, 51201, -3};
    vector<int> result1 = interval_plus(ops1, input1, 5);
    EXPECT_TRUE(check_two_arrays_equal(result1, 7, gt1, 7));    
}

TEST(CalculateOriginalArrayTest, BasicAssertions){
    vector<int> input0 = {0, 14544, -12419, 1098, 1225, 51201, -3};
    vector<int> gt0 = {0, 14544, 2125, 3223, 4448, 55649};
    vector<int> result0 = calculate_original_array(input0, 5);
    EXPECT_TRUE(check_two_arrays_equal(result0, 6, gt0, 6));    

    vector<int> input1 = {0, 4, 0, 9, 1, -6, -3};

    vector<int> gt1 = {0, 4, 4, 13, 14, 8};
    vector<int> result1 = calculate_original_array(input1, 5);
    EXPECT_TRUE(check_two_arrays_equal(result1, 6, gt1, 6));    
}