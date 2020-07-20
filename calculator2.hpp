#ifndef CALCULATOR2_HPP
#define CALCULATOR2_HPP
#include "add.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include <cmath>
using namespace std;

class Calculator2 : public Base
{
private:
	Base* lbs;
	Base* in;
public:
	Calculator2(Base* pound, Base* inch): Base()
	{
		lbs = pound;
		in = inch;
	}
	double evaluate()
	{
		return Div(Mult(703, lbs->evaluate()), Pow(in->evaluate(),2));
	}
};
#endif
