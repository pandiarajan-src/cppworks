#include "src/libs/3_find_hr_min_from_secs.h"
#include "gtest/gtest.h"

TEST(FindHrMinSec, ReturnSuccess1)
{
    int e_hr = 1; int e_min = 4; int e_sec = 30;
    int a_hr = 100; int a_min = 20; int a_sec = 3870;
    find_hr_min_from_secs(a_sec, a_hr, a_min);
    EXPECT_EQ(e_hr, a_hr);
    EXPECT_EQ(e_min, a_min);
    EXPECT_EQ(e_sec, a_sec);
}

TEST(FindHrMinSec, ReturnSuccess2)
{
    int e_hr = 15; int e_min = 48; int e_sec = 10;
    int a_hr = 0; int a_min = 0; int a_sec = 56890;
    find_hr_min_from_secs(a_sec, a_hr, a_min);
    EXPECT_EQ(e_hr, a_hr);
    EXPECT_EQ(e_min, a_min);
    EXPECT_EQ(e_sec, a_sec);
}