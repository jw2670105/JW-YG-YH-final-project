#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP
#include "base.hpp"
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
		return kg->evaluate()/pow(meter->evaluate(), 2);
	}
};
#endif
