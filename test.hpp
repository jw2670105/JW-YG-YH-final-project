#ifndef TEST_HPP
#define TEST_HPP

#include <string>
#include "gtest/gtest.h"
#include "num.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "factory.hpp"
#include "calculator.hpp"
#include "result.hpp"
#include "decorator.hpp"

TEST(Decorator_test, Result_test1)
{
    string test_val;
    vector<string>test_vector;
    test_val = "1";
    test_vector.push_back(test_val);
    test_val = "60";//weight
    test_vector.push_back(test_val);
    test_val = "1.75";//height
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);
    vector<Base*> test_result = factory->string_to_base();
    Calculator* result = new Calculator(test_result);
    Calculator* final_result = result->create();
    Result* decorator = new Result(final_result); 
    EXPECT_NEAR(decorator->evaluate(), 19.5918,0.01);
}

TEST(Decorator_test, Result_test2)
{
    string test_val;
    vector<string>test_vector;
    test_val = "2";
    test_vector.push_back(test_val);
    test_val = "180";//weight
    test_vector.push_back(test_val);
    test_val = "60";//height
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);
    vector<Base*> test_result = factory->string_to_base();
    Calculator* result = new Calculator(test_result);
    Calculator* final_result = result->create();
    Result* decorator = new Result(final_result); 
    EXPECT_NEAR(decorator->evaluate(), 35.15, 0.01);
}
TEST(Decorator_test, Result_test3)
{
    string test_val;
    vector<string>test_vector;
    test_val = "2";
    test_vector.push_back(test_val);
    test_val = "200";//weight
    test_vector.push_back(test_val);
    test_val = "70";//height
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);
    vector<Base*> test_result = factory->string_to_base();
    Calculator* result = new Calculator(test_result);
    Calculator* final_result = result->create();
    Result* decorator = new Result(final_result); 
    EXPECT_NEAR(decorator->evaluate(), 28.6939, 0.01);
}
TEST(CompTest, AddTest) {
    Num* test1 = new Num(3);
    Num* test2 = new Num(8);
    Add* test = new Add(test1, test2);
    EXPECT_EQ(test->evaluate(), 11);
}
TEST(CompTest,SubTest) {
    Num* test1 = new Num(6);
    Num* test2 = new Num(2);
    Sub* test = new Sub(test1, test2);
    EXPECT_EQ(test->evaluate(), 4);
}
TEST(CompTest,MultTest) {
    Num* test1 = new Num(2);
    Num* test2 = new Num(7);
    Mult* test = new Mult(test1, test2);
    EXPECT_EQ(test->evaluate(), 14);
}
TEST(CompTest, DivTest) {
    Num* test1 = new Num(9);
    Num* test2 = new Num(3);
    Div* test = new Div(test1, test2);
    EXPECT_EQ(test->evaluate(), 3);
}
TEST(CompTest,PowTest) {
    Num* test1 = new Num(3);
    Num* test2 = new Num(2);
    Pow* test = new Pow(test1, test2);
    EXPECT_EQ(test->evaluate(), 9);
}
TEST(Factory_test, Metric_Test1)
{
    string test_val;
    vector<string>test_vector;
    test_val = "1";
    test_vector.push_back(test_val);
    test_val = "70";//weight
    test_vector.push_back(test_val);
    test_val = "1.8";//height
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Calculator* result = new Calculator(test_result);
    Calculator* final_result = result->create();    
    EXPECT_NEAR(final_result->evaluate(), 21.6049, 0.01);   
}
TEST(Factory_test, Metric_Test2)
{
    string test_val;
    vector<string>test_vector;
    test_val = "1";
    test_vector.push_back(test_val);
    test_val = "80";//weight
    test_vector.push_back(test_val);
    test_val = "1.6";//height
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Calculator* result = new Calculator(test_result);
	   Calculator* final_result = result->create();
    EXPECT_NEAR(final_result->evaluate(), 31.25, 0.01);
}

TEST(Factory_test, Standard_Test1)
{
    string test_val;
    vector<string>test_vector;
    test_val = "2";
    test_vector.push_back(test_val);
    test_val = "140";//weight
    test_vector.push_back(test_val);
    test_val = "71";//height
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Calculator* result = new Calculator(test_result);
       Calculator* final_result = result->create(); 
   EXPECT_NEAR(final_result->evaluate(), 19.5239, 0.01);
}

TEST(Factory_test, Standard_Test2)
{
    string test_val;
    vector<string>test_vector;
    test_val = "2";
    test_vector.push_back(test_val);
    test_val = "160";//weight
    test_vector.push_back(test_val);
    test_val = "60";//height
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    Calculator* result = new Calculator(test_result);
   Calculator* final_result = result->create(); 
   EXPECT_NEAR(final_result->evaluate(), 31.2444, 0.01);
}
#endif 
