#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP
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
		return Div(kg->evaluate(),Pow(meter->evaluate(), 2));
	}
};
#endif
