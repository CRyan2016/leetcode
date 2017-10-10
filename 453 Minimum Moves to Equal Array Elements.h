//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_453_MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_H
#define LEETCODE_453_MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_H

#include <vector>
#include <limits>

using namespace std;

class Solution {
public:
	int minMoves(vector<int> &nums) {
		int sum = 0, min = numeric_limits<int>().max();
		for (int v:nums) {
			if (v < min) min = v;
			sum += v;
		}
		return sum - min * nums.size();
	}
};

#endif //LEETCODE_453_MINIMUM_MOVES_TO_EQUAL_ARRAY_ELEMENTS_H
