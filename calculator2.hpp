#ifndef CALCULATOR2_HPP
#define CALCULATOR2_HPP
#include "base.hpp"
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
		return 703 * lbs->evaluate() / pow(in->evaluate(),2);
	}
};
#endif
