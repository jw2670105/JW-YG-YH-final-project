#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "base.hpp"
#include <vector>
#include <string>
using namespace std;

class Factory {
private:
	vector<string> string_v;
	vector<Base*> result;
	Base* function_choice;
	Base* weight;
	Base* height;
public:
	Factory() {};


		Factory(vector<string> input){
			string_v = input;
		}

		vector<Base*> string_to_base(){
			function_choice = new Op(stoi(string_v.at(0)));
			result.push_back(function_choice);
			weight = new Op(stoi(string_v.at(1)));
			result.push_back(weight);
			height = new Op(stoi(string_v.at(2)));
			result.push_back(height);			
			return result;
		}
};

#endif
