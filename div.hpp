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
        virtual std::string stringify() { 
		return x->stringify() + " / " + y->stringify();
	 }
};

#endif //__MULT_HPP__
