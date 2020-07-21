#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <vector>
#include <string>
#include "factory.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include <cmath>
using namespace std;

class Calculator : public Base
{
private:
	Base* function_choice;
	Base* weight;
	Base* height;
	
public:
	Calculator(){};	

	Calculator(vector<Base*> input):Base() 
	{
		function_choice = input.at(0);
		weight = input.at(1);
		height = input.at(2);
	}
	double evaluate()
	{	
		if(function_choice->evaluate() == 1){
			Op* two = new Op(2);
			Pow* result = new Pow(height, two);
			Div* result2 = new Div(weight,result);
			return result2->evaluate();
		}else if (function_choice->evaluate() == 2){
			Op* two = new Op(2);
			Op* sot = new Op(703);
			Mult* result = new Mult(sot, weight);
			Pow* result2 = new Pow(height,two);
			Div* result3 = new Div(result, result2);
			return result3->evaluate();		
		}
	}
};
#endif
