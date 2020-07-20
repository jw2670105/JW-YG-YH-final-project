#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP
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
	Base* kg;
	Base* meter;
public:
	Calculator(Base* weight, Base* height) :Base()
	{
		kg = weight;
		meter = height;
	}
	virtual double evaluate()
	{	
		Op* two = new Op(2);
		Pow* result = new Pow(meter, two);
		Div* result2 = new Div(kg,result);
		return result2->evaluate();
	}
};
#endif
