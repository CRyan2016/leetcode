//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_258_ADD_DIGITS_H
#define LEETCODE_258_ADD_DIGITS_H

class Solution {
public:
	int addDigits(int num) {
		return num != 0 && num % 9 == 0 ? 9 : num - (num / 9) * 9;
	}
};

#endif //LEETCODE_258_ADD_DIGITS_H
