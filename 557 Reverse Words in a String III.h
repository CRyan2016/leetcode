//
// Created by cz on 2017/9/19.
//

#ifndef LEETCODE_557_REVERSE_WORDS_IN_A_STRING_III_H
#define LEETCODE_557_REVERSE_WORDS_IN_A_STRING_III_H

#include <string>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
	string reverseWords(string s) {
		string str;
		std::stack<char> stk;
		for(char c:s){
			if(c==' '){
				while (!stk.empty()){
					str.push_back(stk.top());
					stk.pop();
				}
				str.push_back(c);
			} else{
				stk.push(c);
			}
		}
		while (!stk.empty()){
			str.push_back(stk.top());
			stk.pop();
		}
		return str;
	}
};
#endif //LEETCODE_557_REVERSE_WORDS_IN_A_STRING_III_H
