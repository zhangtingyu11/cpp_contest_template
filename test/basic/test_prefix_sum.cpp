#include "basic/prefix_sum.hpp"
#include "common/compare.hpp"
#include <gtest/gtest.h>

TEST(PrefixSum1DTest, BasicAssertions){
    vector<int> input0 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> gt0 = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
    vector<int> result0 = calc_prefix_sum_1D(10, input0);
    EXPECT_TRUE(check_two_arrays_equal(result0, 11, gt0, 11));
    
    vector<int> input1 = {54, 46, 85, 41, 32, 35, 25, 13, 34, 10, 19, 65, 19, 79, 56, 75, 18, 30, 42, 80, 75, 33, 34, 16, 35, 23, 52, 70, 77, 37, 37, 1, 100, 81, 89, 75, 26, 28, 35, 85, 70, 42, 48, 49, 20, 42, 78, 32, 75, 50, 36, 85, 89, 97, 62, 83, 95, 63, 8, 33, 22, 13, 55, 3, 78, 60, 21, 88, 31, 91, 83, 82, 78, 76, 93, 6, 34, 86, 45, 10, 22, 100, 41, 48, 29, 78, 54, 81, 5, 55, 18, 21, 81, 20, 92, 27, 89, 75, 10, 94};
    vector<int> gt1 = {0, 54, 100, 185, 226, 258, 293, 318, 331, 365, 375, 394, 459, 478, 557, 613, 688, 706, 736, 778, 858, 933, 966, 1000, 1016, 1051, 1074, 1126, 1196, 1273, 1310, 1347, 1348, 1448, 1529, 1618, 1693, 1719, 1747, 1782, 1867, 1937, 1979, 2027, 2076, 2096, 2138, 2216, 2248, 2323, 2373, 2409, 2494, 2583, 2680, 2742, 2825, 2920, 2983, 2991, 3024, 3046, 3059, 3114, 3117, 3195, 3255, 3276, 3364, 3395, 3486, 3569, 3651, 3729, 3805, 3898, 3904, 3938, 4024, 4069, 4079, 4101, 4201, 4242, 4290, 4319, 4397, 4451, 4532, 4537, 4592, 4610, 4631, 4712, 4732, 4824, 4851, 4940, 5015, 5025, 5119};
    vector<int> result1 = calc_prefix_sum_1D(10, input1);
    EXPECT_TRUE(check_two_arrays_equal(result1, 11, gt1, 11));
}

TEST(PrefixSum2DTest, BasicAssertions){
    vector<vector<int>> input0 = {
        {1, 2, 3},
        {2, 3, 4},
        {3, 4, 5}
    };
    vector<vector<int>> gt0 = {
        {0, 0, 0, 0},
        {0, 1, 3, 6},
        {0, 3, 8, 15},
        {0, 6, 15, 27}
    };
    vector<vector<int>> result0 = calc_prefix_sum_2D(3, 3, input0);
    EXPECT_TRUE(check_two_matrics_equal(result0, 4, 4, gt0, 4, 4));

    vector<vector<int>> input1 = {
        {1, 2, 3},
        {2, 3, 4},
        {3, 4, 5},
        {4, 5, 6}
    };
    vector<vector<int>> gt1 = {
        {0, 0, 0, 0},
        {0, 1, 3, 6},
        {0, 3, 8, 15},
        {0, 6, 15, 27},
        {0, 10, 24, 42}
    };
    vector<vector<int>> result1 = calc_prefix_sum_2D(4, 3, input1);
    EXPECT_TRUE(check_two_matrics_equal(result1, 5, 4, gt1, 5, 4));
}



