#include "basic/binary_search.hpp"
#include <gtest/gtest.h>
#include "common/single_max_min_function.hpp"

TEST(FindSmallestBiggerThanOrEqualXTest, BasicAssertions){
    vector<int> input0 = {0, 1, 2, 3, 4, 5};
    int target0 = 3;
    int gt0 = 3;
    EXPECT_EQ(find_smallest_bigger_than_or_equal_x(input0, target0), gt0);

    vector<int> input1 = {0, 1, 2, 3, 4, 5};
    int target1 = 6;
    int gt1 = -1;
    EXPECT_EQ(find_smallest_bigger_than_or_equal_x(input1, target1), gt1);

    vector<int> input2 = {0, 1, 2, 3, 4, 6};
    int target2 = 5;
    int gt2 = 6;
    EXPECT_EQ(find_smallest_bigger_than_or_equal_x(input2, target2), gt2);
}

TEST(FindBiggestSmallerThanOrEqualXTest, BasicAssertions){
    vector<int> input0 = {0, 1, 2, 3, 4, 5};
    int target0 = 3;
    int gt0 = 3;
    EXPECT_EQ(find_biggest_smaller_than_or_equal_x(input0, target0), gt0);

    vector<int> input1 = {0, 1, 2, 3, 4, 5};
    int target1 = -1;
    int gt1 = -1;
    EXPECT_EQ(find_biggest_smaller_than_or_equal_x(input1, target1), gt1);

    vector<int> input2 = {0, 1, 2, 3, 4, 6};
    int target2 = 5;
    int gt2 = 4;
    EXPECT_EQ(find_biggest_smaller_than_or_equal_x(input2, target2), gt2);
}

TEST(SqrtXWithEpsTest, BasicAssertions){
    int x0 = 5;
    double eps0 = 0.01l;
    double gt0 = sqrt(double(x0));
    EXPECT_NEAR(sqrt_x_with_eps(x0, eps0), gt0, eps0);

    int x1 = 13;
    double eps1 = 0.00001l;
    double gt1 = sqrt(double(x1));
    EXPECT_NEAR(sqrt_x_with_eps(x1, eps1), gt1, eps1);
}

TEST(SqrtXWithLoopTest, BasicAssertions){
    int x0 = 5;
    double eps0 = 0.01l;
    double gt0 = sqrt(double(x0));
    EXPECT_NEAR(sqrt_x_with_loop(x0), gt0, eps0);

    int x1 = 13;
    double eps1 = 0.00001l;
    double gt1 = sqrt(double(x1));
    EXPECT_NEAR(sqrt_x_with_loop(x1), gt1, eps1);
}

TEST(FindMaxOfSingleMaxFunctionTest, BasicAssertions){
    double eps0 = 0.00001l;
    double gt0 = 3.223;
    EXPECT_NEAR(find_max_of_single_max_function(&single_max_function, eps0), gt0, eps0);
}

TEST(FindMinOfSingleMinFunctionTest, BasicAssertions){
    double eps0 = 0.00001l;
    double gt0 = 3.532;
    EXPECT_NEAR(find_min_of_single_min_function(&single_min_function, eps0), gt0, eps0);
}