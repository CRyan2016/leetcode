//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_506_RELATIVE_RANKS_H
#define LEETCODE_506_RELATIVE_RANKS_H

#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
	vector<string> findRelativeRanks(vector<int> &nums) {
		vector<int> rank;
		for (int i = 0; i < nums.size(); ++i) rank.push_back(i);
		sort(rank.begin(), rank.end(), [&](int a, int b) { return nums[a] > nums[b]; });
		vector<string> vec(nums.size());
		for (int j = 3; j < nums.size(); ++j) {
			vec[rank[j]] = to_string(j + 1);
		}
		if (nums.size() > 0) vec[rank[0]] = "Gold Medal";
		if (nums.size() > 1) vec[rank[1]] = "Silver Medal";
		if (nums.size() > 2) vec[rank[2]] = "Bronze Medal";
		return vec;
	}
};

#endif //LEETCODE_506_RELATIVE_RANKS_H
