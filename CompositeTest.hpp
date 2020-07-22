#ifndef __COMPOSITE_TEST_HPP__
#define __COMPOSITE_TEST_HPP__

#include <string>
#include "gtest/gtest.h"
#include "num.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "factory.hpp"
#include "calculator.hpp"

TEST(AddTest, intTest) {
    Num* test1 = new Num(3);
    Num* test2 = new Num(8);
    Add* test = new Add(test1, test2);
    EXPECT_EQ(test->evaluate(), 11);
}
TEST(AddTest, decTest) {
    Num* test1 = new Num(3.5);
    Num* test2 = new Num(8);
    Add* test = new Add(test1, test2);
    EXPECT_EQ(test->evaluate(), 11.5);
}
TEST(SubTest, intTest) {
    Num* test1 = new Num(6);
    Num* test2 = new Num(2);
    Sub* test = new Sub(test1, test2);
    EXPECT_EQ(test->evaluate(), 4);
}
TEST(SubTest, decTest) {
    Num* test1 = new Num(6);
    Num* test2 = new Num(2.2);
    Sub* test = new Sub(test1, test2);
    EXPECT_EQ(test->evaluate(), 3.8);
}
TEST(MultTest, intTest) {
    Num* test1 = new Num(2);
    Num* test2 = new Num(7);
    Mult* test = new Mult(test1, test2);
    EXPECT_EQ(test->evaluate(), 14);
}
TEST(MultTest, decTest) {
    Num* test1 = new Num(2);
    Num* test2 = new Num(7.2);
    Mult* test = new Mult(test1, test2);
    EXPECT_EQ(test->evaluate(), 14.4);
}
TEST(DivTest, intTest) {
    Num* test1 = new Num(9);
    Num* test2 = new Num(3);
    Div* test = new Div(test1, test2);
    EXPECT_EQ(test->evaluate(), 3);
}
TEST(DivTest, decTest) {
    Num* test1 = new Num(9);
    Num* test2 = new Num(3);
    Div* test = new Div(test1, test2);
    EXPECT_EQ(test->evaluate(), 2.72);
}
TEST(PowTest, intTest) {
    Num* test1 = new Num(3);
    Num* test2 = new Num(2);
    Pow* test = new Pow(test1, test2);
    EXPECT_EQ(test->evaluate(), 9);
}TEST(PowTest, decTest) {
    Num* test1 = new Num(1.1);
    Num* test2 = new Num(2);
    Pow* test = new Pow(test1, test2);
    EXPECT_EQ(test->evaluate(), 1.21);
}
#endif
