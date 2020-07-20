#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <cmath>

class Pow : public Base {
    
    private:
	Base* x;
	Base* y;

    public:
        Pow(Base* num1, Base* num2) : Base() {
		x = num1;
		y = num2;
	 }
        virtual double evaluate() { 
		return std::pow(x->evaluate(), y ->evaluate());
	 }
        virtual std::string stringify() { 
		return x->stringify() + " ** " + y->stringify();
	 }
};

#endif //__POW_HPP__
