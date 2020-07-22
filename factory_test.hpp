#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include <string>
#include "gtest/gtest.h"
#include "num.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "factory.hpp"
#include "calculator.hpp"

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
#endif //__OP_TEST_HPP__
