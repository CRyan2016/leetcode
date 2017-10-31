//
// Created by cz on 2017/10/11.
//

#ifndef LEETCODE_504_BASE_7_H
#define LEETCODE_504_BASE_7_H

#include <string>
#include <stack>

using namespace std;

class Solution {
public:
	string convertToBase7(int num) {
		stack<char> re;
		int remain = 0, oldNum = num;
		do {
			remain = num % 7;
			if (remain < 0) re.push('0' + -1 * remain);
			else re.push('0' + remain);
			num /= 7;
		} while (num);
		if (oldNum < 0) re.push('-');
		string str;
		while (!re.empty()) {
			str += re.top();
			re.pop();
		}
		return str;
	}
};

#endif //LEETCODE_504_BASE_7_H
