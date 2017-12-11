//
// Created by cz on 2017/12/7.
//

#ifndef LEETCODE_034_SEARCH_FOR_A_RANGE_H
#define LEETCODE_034_SEARCH_FOR_A_RANGE_H

#include <vector>

using namespace std;

class Solution {
public:
	vector<int> searchRange(vector<int> &nums, int target) {
		int start = 0, end = nums.size();
		vector<int> re({-1,-1});
		while (start < end) {
			int mid = (start + end) / 2;
			if (nums[mid] > target) {
				end = mid;
			} else if (nums[mid] < target) {
				start = mid + 1;
			} else {
				for (int i = start; i <= mid; ++i) {
					if(nums[i] == target){
						re[0] = i;
						break;
					}
				}
				for (int j = end-1; j >= mid; --j) {
					if(nums[j] == target){
						re[1] = j;
						break;
					}
				}
				break;
			}
		}
		return re;
	}
};

#endif //LEETCODE_034_SEARCH_FOR_A_RANGE_H
