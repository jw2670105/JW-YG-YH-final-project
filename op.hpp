#ifndef __OP_HPP__	
#define __OP_HPP__	

#include "base.hpp"	

class Op : public Base {	


    private:	
	double num;	

    public:	
        Op(double value) : Base() {	
		 num = value;	
	 }	
        virtual double evaluate() { 	
		return num;	
	 }	

};	

#endif //__OP_HPP__
