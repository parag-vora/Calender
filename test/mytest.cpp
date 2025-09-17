#include "gtest/gtest.h"
#include "test.hpp"

TEST(CalenderTest, LeapYear) {
    EXPECT_EQ(isLeapYear(2020), 1);  // 2020 is leap year
    EXPECT_EQ(isLeapYear(1900), 0);  // 1900 is not a leap year
    EXPECT_EQ(isLeapYear(2000), 1);  // 2000 is a leap year
    EXPECT_EQ(isLeapYear(2021), 0);  // 2021 is not a leap year
    EXPECT_EQ(isLeapYear(2025), 0); // 2025 is not a leap year
}


// 0 = Sunday, 1 = Monday, ...
TEST(CalenderTest, FirstDayOfYear) {
    EXPECT_EQ(getFirstDayOfYear(2021), 5); // 2021 started on a Friday
    EXPECT_EQ(getFirstDayOfYear(2020), 3); // 2020 started on a Wednesday
    EXPECT_EQ(getFirstDayOfYear(2000), 6); // 2000 started on a Saturday
    EXPECT_EQ(getFirstDayOfYear(1900), 1); // 1900 started on a Monday
    EXPECT_EQ(getFirstDayOfYear(2025), 3); // 2025 starts on a wednesday
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}