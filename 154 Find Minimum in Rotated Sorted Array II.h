//
// Created by cz on 2017/12/10.
//

#ifndef LEETCODE_154_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_II_H
#define LEETCODE_154_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_II_H

#include <vector>

using namespace std;

class Solution {
public:
	int findMin(vector<int> &nums) {
		int start = 0, end = nums.size() - 1;
		while (start < end) {
			int middle = start + (end - start) / 2;
			if (nums[end] > nums[start]) {
				end = middle;
			} else {
				if (nums[middle] > nums[start])
					start = middle + 1;
				else
					start += 1;
			}
		}
		return nums[start];
	}
};

#endif //LEETCODE_154_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_II_H
