//
// Created by cz on 2017/9/19.
//

#ifndef LEETCODE_344_REVERSE_STRING_H
#define LEETCODE_344_REVERSE_STRING_H

#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
	string reverseString(string s) {
		reverse(s.begin(),s.end());
		return s;
	}
};

#endif //LEETCODE_344_REVERSE_STRING_H
