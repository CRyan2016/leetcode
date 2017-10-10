//
// Created by cz on 2017/9/20.
//

#ifndef LEETCODE_136_SINGLE_NUMBER_H
#define LEETCODE_136_SINGLE_NUMBER_H

#include <vector>
using namespace std;
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int sum = 0;
		for (int i = 0; i <nums.size(); ++i) {
			sum ^= nums[i];
		}
		return sum;
	}
};
#endif //LEETCODE_136_SINGLE_NUMBER_H
