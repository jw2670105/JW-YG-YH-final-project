#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
    
    private:
	Base* x;
	Base* y;

    public:
        Div(Base* num1, Base* num2) : Base() {
		x = num1;
		y = num2;
	 }
        virtual double evaluate() { 
		return x->evaluate() / y ->evaluate();
	 }
};

#endif //__DIV_HPP__
