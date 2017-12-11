//
// Created by cz on 2017/11/6.
//

#ifndef LEETCODE_674_LONGEST_CONTINUOUS_INCREASING_SUBSEQUENCE_H
#define LEETCODE_674_LONGEST_CONTINUOUS_INCREASING_SUBSEQUENCE_H

#include <vector>

using namespace std;

class Solution {
public:
	int findLengthOfLCIS(vector<int> &nums) {
		if (!nums.size()) return 0;
		int start = 0, end = 1, max = 1;
		for (; end < nums.size(); ++end) {
			if (nums[end - 1] >= nums[end]) {
				if (end - start > max) max = end - start;
				start = end;
			}
		}
		if (end - start > max) max = end - start;
		return max;
	}
};

#endif //LEETCODE_674_LONGEST_CONTINUOUS_INCREASING_SUBSEQUENCE_H
