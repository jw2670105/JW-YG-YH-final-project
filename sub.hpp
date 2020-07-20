#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base {
    
    private:
	Base* x;
	Base* y;

    public:
        Sub(Base* num1, Base* num2) : Base() {
		x = num1;
		y = num2;
	 }
        virtual double evaluate() { 
		return x->evaluate() - y ->evaluate();
	 }
};

#endif //__SUB_HPP__
