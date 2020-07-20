#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    
    private:
	Base* x;
	Base* y;

    public:
        Mult(Base* num1, Base* num2) : Base() {
		x = num1;
		y = num2;
	 }
        virtual double evaluate() { 
		return x->evaluate() * y ->evaluate();
	 }
        virtual std::string stringify() { 
		return x->stringify() + " * " + y->stringify();
	 }
};

#endif //__MULT_HPP__
