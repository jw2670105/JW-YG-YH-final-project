#include "base.hpp"
#include "calculator.hpp"
#include "decorator.hpp"
#include "result.hpp"
#include "num.hpp"
#include <iostream>
int main(int argc, char** argv)
{
	
	char option;
	double weight;
	double height;
	cout << "Welcome to the BMI CALCULATOR " << endl;
	cout << "Please enter your information input '1' to use kilogram and meter '2' to use pound and inch" << endl;
	cin >> option;
	if (option == '1')
	{
		cout << "Please enter your weight in kilograms " << endl;
		cin >> weight;
		cout << "Please enter your height in meters" << endl;
		cin >> height;
		Num* value1 = new Num(weight);
		Num* value2 = new Num(height);
		Metric_Calculator* BMI_TEST = new Calculator(value1, value2);
		Result* result1 = new Result(BMI_TEST);
		result1->BMI_RESULT();
	}
	else if (option == '2')
	{
		cout << "Please enter your weight in pounds " << endl;
		cin >> weight;
		cout << "Please enter your height in inches" << endl;
		cin >> height;
		Num* v1 = new Num(weight);
		Num* v2 = new Num(height);
		Standerd_Calculator2* BMI_TEST2 = new Calculator2(v1, v2);
		Result* result2 = new Result(BMI_TEST2);
		result2->BMI_RESULT();
	}
	else
	{
		cout << "Invalid input please do it again" << endl;
	}



	/*

	vector<string> input;
	for(int i = 1; i < argc; i++){
	    input.push_back(argv[i]);
   	}
	Factory fact(input);
	vector<Base*> base_v;
    	base_v = fact.string_to_base();
    	Calculator* result = new Calculator(base_v);
	Calculator* result2 = result->create();
	Result final_result(result2);
	final_result.BMI_RESULT();    	


	return 0;
*/
}


