
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "square.h"
}

TEST(square, no_sol) {
    solution res = square(1, 2, 6);
    EXPECT_EQ(0, res.count);
}
TEST(square, one_sol) {
    solution res = square(4, 4, 1);
    EXPECT_EQ(-0.5, res.x1);
    EXPECT_EQ(1, res.count);
}

TEST(square, two_sol) {
    solution res = square(2, 5, 2);
    EXPECT_EQ(-2, res.x1);
    EXPECT_EQ(-0.5, res.x2);
    EXPECT_EQ(2, res.count);
}
TEST(square, test4_negative){
    solution res = square(0, 1, 1);
    EXPECT_EQ(-1, res.x1);
    EXPECT_EQ(1, res.count);

}
TEST(square, test5_negative){
    solution res = square(1, 0, -1);
    EXPECT_EQ(-1, res.x1);
    EXPECT_EQ(1, res.x2);
    EXPECT_EQ(2, res.count);

}
TEST(square, test6_negative){
    solution res = square(1, 0, 1);
    EXPECT_EQ(0, res.count);

}

TEST(square, test7_negative){
    solution res = square(0, 1, 0);
    EXPECT_EQ(0, res.x1);
    EXPECT_EQ(1, res.count);
}
TEST(square, test8_negative){
    solution res = square(1, 1, 0);
    EXPECT_EQ(-1, res.x1);
    EXPECT_EQ(0, res.x2);
    EXPECT_EQ(2, res.count);
}
TEST(square, test9_negative){
    solution res = square(1, 0, 0);
    EXPECT_EQ(0, res.x1);
    EXPECT_EQ(1, res.count);
}
TEST(square, test10_negative){
    solution res = square(0, 0, 1);
    EXPECT_EQ(0, res.count);
}
TEST(square, test11_negative){
    solution res = square(0, 0, 0);
    EXPECT_EQ(3, res.count);
}
