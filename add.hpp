#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base {
    
    private:
	Base* x;
	Base* y;

    public:
        Add(Base* num1, Base* num2) : Base() {
		x = num1;
		y = num2;
	 }
        virtual double evaluate() { 
		return x->evaluate() + y ->evaluate();
	 }
        virtual std::string stringify() { 
		return x->stringify() + " + " + y->stringify();
	 }
};

#endif //__ADD_HPP__
