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
	Base* function_chice;
	Base* weight;
	Base* height;
public:
	Factory() {};


		Factory(vector<string> input){
			string_v = input;
		}

		vector<Base*> string_to_base(){
			left = new Op(stoi(string_v.at(0)));
			result.push_back(left);
			for(int i = 1; i < string_v.size()-1; i++){
				if((i + 1) % 2 == 0){
					right = new Op(stoi(string_v.at(i + 1)));
				}
					left = result.back();
					if(string_v.at(i) == "+"){
						base = new Add(left, right);
						result.push_back(base);
					} else if (string_v.at(i) == "-"){
						base = new Sub(left, right);
						result.push_back(base);
					} else if (string_v.at(i) == "*"){
						base = new Mult(left, right);
						result.push_back(base);
					} else if (string_v.at(i) == "/"){
						base = new Div(left, right);
						result.push_back(base);
					} else if (string_v.at(i) == "**"){
						base = new Pow(left, right);
						result.push_back(base);
					}
				}
			
			return result;

		}

};

#endif
