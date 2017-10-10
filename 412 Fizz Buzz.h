//
// Created by cz on 2017/9/19.
//

#ifndef LEETCODE_412_FIZZ_BUZZ_H
#define LEETCODE_412_FIZZ_BUZZ_H

#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
	vector<string> fizzBuzz(int n) {
		string str[] = {"Fizz", "Buzz", "FizzBuzz"};
		vector<string> vec;
		for (int i = 1; i <= n; ++i) {
			if (i % 15 == 0) vec.push_back(str[2]);
			else if (i % 5 == 0) vec.push_back(str[1]);
			else if (i % 3 == 0) vec.push_back(str[0]);
			else {
				stringstream strStream;
				strStream << i;
				vec.push_back(strStream.str());
			}
		}
		return vec;
	}
};

#endif //LEETCODE_412_FIZZ_BUZZ_H
