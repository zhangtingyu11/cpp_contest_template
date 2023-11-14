#include "mathematic/fast_power.hpp"
#include <gtest/gtest.h>

TEST(FastPowerTest, BasicAssertions) {
    EXPECT_EQ(fast_power(2, 10), 1024);
    EXPECT_EQ(fast_power(3, 6), 729);
    EXPECT_EQ(fast_power(4, 13), 67108864);
    EXPECT_EQ(fast_power(5, 6), 15625);
}

TEST(FastPowerModPTest, BasicAssertions) {
    EXPECT_EQ(fast_power_mod_p(2LL, 15658LL, 9001LL), 2879LL);
    EXPECT_EQ(fast_power_mod_p(3LL, 45646LL, 1000000007LL), 891832701LL);
    EXPECT_EQ(fast_power_mod_p(4LL, 13454LL, 1001LL), 289LL);
    EXPECT_EQ(fast_power_mod_p(5LL, 64548LL, 12345LL), 2020LL);
}
