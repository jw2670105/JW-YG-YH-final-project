#ifndef CALCULATOR2_HPP
#define CALCULATOR2_HPP
#include "op.hpp"
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
		Op* two = new Op(2);
		Op* sot = new Op(703);
		Mult* result = new Mult(sot, lbs);
		Pow* result2 = new Pow(in,two);
		Div* result3 = new Div(result, result2);
		return result3->evaluate();
	}
};
#endif
