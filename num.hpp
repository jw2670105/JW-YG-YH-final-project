#ifndef NUM_HPP
#define NUM_HPP

#include "base.hpp"

class Num : public Base
{
private:
	double num;
public:
	Num(double value) : Base()
	{
		num = value;
	}
	virtual double evaluate()
	{
		return num;
	}
};

#endif 
