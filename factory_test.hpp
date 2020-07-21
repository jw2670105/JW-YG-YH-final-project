#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include <string>
#include "gtest/gtest.h"
#include "op.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "factory.hpp"
#include "calculator.hpp"

TEST(Factory_test, subTest)
{
    string test_val;
    vector<string>test_vector;
    test_val = "1";
    test_vector.push_back(test_val);
    test_val = "100";//weight
    test_vector.push_back(test_val);
    test_val = "100";//height
    test_vector.push_back(test_val);
    Factory* factory = new Factory(test_vector);

    vector<Base*> test_result = factory->string_to_base();
    
}

#endif //__OP_TEST_HPP__
