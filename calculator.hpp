#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#include <vector>
#include <string>
#include "factory.hpp"
#include "num.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include <cmath>
using namespace std;

class Calculator : public Base
{
public:
	Base* function_choice;
	Base* weight;
	Base* height;
	

	Calculator(){};	

	Calculator(vector<Base*> input):Base() 
	{
		function_choice = input.at(0);
		weight = input.at(1);
		height = input.at(2);
	}
        virtual double evaluate(){};
	Calculator* create();
};

class Metric_calculator : public Calculator{
public:
        Metric_calculator(){};
        Metric_calculator(Base* num1, Base* num2) : Calculator(){
                weight = num1;
                height = num2;
        }
        virtual double evaluate()
        {
                        Num* two = new Num(2);
                        Pow* result = new Pow(height, two);
                        Div* result2 = new Div(weight,result);
                        return result2->evaluate();
        }

};

class Standard_calculator : public Calculator{
public:
        Standard_calculator(){};
        Standard_calculator(Base* num1, Base* num2):Calculator(){
                weight = num1;
                height = num2;
        }

        virtual double evaluate(){
                Num* two = new Num(2);
                Num* sot = new Num(703);
                Mult* result = new Mult(sot, weight);
                Pow* result2 = new Pow(height,two);
                Div* result3 = new Div(result, result2);
                return result3->evaluate();
        }
};

Calculator* Calculator::create(){
                if(function_choice->evaluate() == 1){
                        Calculator* new_cal =  new Metric_calculator(weight, height);
                        return new_cal;
                }else if(function_choice->evaluate() == 2){
                        return new Standard_calculator(weight, height);
                }else{
                        return nullptr;
                }

        }


#endif
