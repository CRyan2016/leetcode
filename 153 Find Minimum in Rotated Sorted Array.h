//
// Created by cz on 17-7-22.
//

#ifndef ALGORITHRMS_153_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H
#define ALGORITHRMS_153_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H

#include <vector>

using namespace std;

class Solution {
public:
	int findMin(vector<int> &nums) {
		int n = nums.size();
		int min = nums[0];
		for (int i = 1; i < n; ++i) {
			if (nums[i] < min)
				min = nums[i];
		}
		return min;
	}

	int findMin2(vector<int> &nums) {
		int start = 0, end = nums.size();
		while (start < end) {
			int mid = start + (end - start) / 2;
			if (nums[mid] < nums[end - 1]) start = mid + 1;
			else end = mid + 1;
		}
		return nums[start];
	}
};

#endif //ALGORITHRMS_153_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H
