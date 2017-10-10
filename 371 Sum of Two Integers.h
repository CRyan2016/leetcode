//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_371_SUM_OF_TWO_INTEGERS_H
#define LEETCODE_371_SUM_OF_TWO_INTEGERS_H

class Solution {
public:
	int getSum(int a, int b) {
		int sum = a;
		while (b) {
			sum = a ^ b;
			b = (a & b) << 1;
			a = sum;
		}
		return sum;
	}
};

#endif //LEETCODE_371_SUM_OF_TWO_INTEGERS_H
