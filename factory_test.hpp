#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include <string>
#include "gtest/gtest.h"
#include "op.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Pow.hpp"
#include "factory.hpp"
#include "calculator.hpp"

TEST(Factory_test, subTest)
{
    string test_val;
    vector<string>test_vector;
    test_val = "7";
    test_vector.push_back(test_val);
    test_val = "-";
    test_vector.push_back(test_val);
    test_val = "2";
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Base* conversion = test_result.back();



    ASSERT_NE(conversion, nullptr);
    EXPECT_EQ(conversion->stringify(), "7.000000 - 2.000000");
    EXPECT_EQ(conversion->evaluate(), 5.000000);
}

TEST(Factory_test, powTest)
{
    string test_val;
    vector<string>test_vector;
    test_val = "7";
    test_vector.push_back(test_val);
    test_val = "**";
    test_vector.push_back(test_val);
    test_val = "2";
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Base* conversion = test_result.back();



    ASSERT_NE(conversion, nullptr);
    EXPECT_EQ(conversion->stringify(), "7.000000 ** 2.000000");
    EXPECT_EQ(conversion->evaluate(), 49.000000);
}

TEST(Factory_test, addTest)
{
    string test_val;
    vector<string>test_vector;
    test_val = "7";
    test_vector.push_back(test_val);
    test_val = "+";
    test_vector.push_back(test_val);
    test_val = "2";
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Base* conversion = test_result.back();



    ASSERT_NE(conversion, nullptr);
    EXPECT_EQ(conversion->stringify(), "7.000000 + 2.000000");
    EXPECT_EQ(conversion->evaluate(), 9.000000);
}

TEST(Factory_test, divTest)
{
    string test_val;
    vector<string>test_vector;
    test_val = "8";
    test_vector.push_back(test_val);
    test_val = "/";
    test_vector.push_back(test_val);
    test_val = "2";
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Base* conversion = test_result.back();


    ASSERT_NE(conversion, nullptr);
    EXPECT_EQ(conversion->stringify(), "8.000000 / 2.000000");
    EXPECT_EQ(conversion->evaluate(), 4.000000);
}

TEST(Factory_test, multTest)
{
    string test_val;
    vector<string>test_vector;
    test_val = "8";
    test_vector.push_back(test_val);
    test_val = "*";
    test_vector.push_back(test_val);
    test_val = "2";
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Base* conversion = test_result.back();


    ASSERT_NE(conversion, nullptr);
    EXPECT_EQ(conversion->stringify(), "8.000000 * 2.000000");
    EXPECT_EQ(conversion->evaluate(), 16.000000);
}

TEST(Factory_test, combinationTest)
{
    string test_val;
    vector<string>test_vector;
    test_val = "8";
    test_vector.push_back(test_val);
    test_val = "*";
    test_vector.push_back(test_val);
    test_val = "2";
    test_vector.push_back(test_val);
    test_val = "-";
    test_vector.push_back(test_val);
    test_val = "7";
    test_vector.push_back(test_val);
    test_val = "+";
    test_vector.push_back(test_val);
    test_val = "2";
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Base* conversion = test_result.back();


    ASSERT_NE(conversion, nullptr);
    EXPECT_EQ(conversion->stringify(), "8.000000 * 2.000000 - 7.000000 + 2.000000");
    EXPECT_EQ(conversion->evaluate(), 11.000000);
}

TEST(Factory_test, combinationTest2)
{
    string test_val;
    vector<string>test_vector;
    test_val = "3";
    test_vector.push_back(test_val);
    test_val = "+";
    test_vector.push_back(test_val);
    test_val = "2";
    test_vector.push_back(test_val);
    test_val = "/";
    test_vector.push_back(test_val);
    test_val = "5";
    test_vector.push_back(test_val);
    test_val = "**";
    test_vector.push_back(test_val);
    test_val = "10";
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Base* conversion = test_result.back();


    ASSERT_NE(conversion, nullptr);
    EXPECT_EQ(conversion->stringify(), "3.000000 + 2.000000 / 5.000000 ** 10.000000");
    EXPECT_EQ(conversion->evaluate(), 1.000000);
}
#endif //__OP_TEST_HPP__
