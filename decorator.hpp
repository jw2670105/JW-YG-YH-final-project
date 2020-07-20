#ifndef DECORATOR_H
#define DECORATOR_H

#include "base.hpp"
#include <math.h>
#include <stdlib.h>
using namespace std;

class Decorator : public Base
{
private:
	Base* decorator;
public:
	Decorator()
	{
		decorator = nullptr;
	}
	Decorator(Base* base)
	{
		decorator = base;
	}
};
#endif
