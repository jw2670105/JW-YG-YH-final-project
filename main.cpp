#include "base.hpp"
#include "calculator.hpp"
#include "decorator.hpp"
#include "result.hpp"
#include "num.hpp"
#include <iostream>
int main(int argc, char** argv)
{
	vector<string> input;
	for(int i = 1; i < argc; i++){
	    input.push_back(argv[i]);
   	}
	Factory fact(input);
	vector<Base*> base_v;
    	base_v = fact.string_to_base();
    	Calculator* result = new Calculator(base_v);
	Result final_result(result);
	final_result.BMI_RESULT();    	


	return 0;

}


