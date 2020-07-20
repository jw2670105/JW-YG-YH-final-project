#ifndef RESULT_HPP
#define RESULT_HPP
#include "decorator.hpp"
#include <iostream>
using namespace std;

class Result : public Decorator
{
private:
	Base* decorator;
public:
	Result()
	{
		decorator = nullptr;
	}
	Result(Base* base)
	{
		decorator = base;
	}
	double evaluate()
	{
		return decorator->evaluate();
	}
	void BMI_RESULT()
	{
		if (decorator->evaluate() <= 18.5)
		{
			cout << "You are under weight" << endl;
		}
		else if (decorator->evaluate() > 18.5 && decorator->evaluate() <= 24.9)
		{
			cout << "You are helathy" << endl;
		}
		else if (decorator->evaluate() > 24.9 && decorator->evaluate() <= 29.9)
		{
			cout << "You are overweight" << endl;
		}
		else
		{
			cout << "You are obese" << endl;
		}
	}

};
#endif
