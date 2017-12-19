//
// Created by cz on 2017/12/11.
//

#ifndef LEETCODE_287_FIND_THE_DUPLICATE_NUMBER_H
#define LEETCODE_287_FIND_THE_DUPLICATE_NUMBER_H

#include <vector>

using namespace std;

class Solution {
public:
	int findDuplicate(vector<int> &nums) {
		int start = 0, end = nums.size() - 1;
		while (start < end) {
			int mid = start + (end - start) / 2, cnt = 0;
			for (int nu:nums)
				if (nu <= mid) cnt++;
			if (cnt <= mid) start = mid + 1;
			else end = mid;
		}
		return start;
	}
};

#endif //LEETCODE_287_FIND_THE_DUPLICATE_NUMBER_H
