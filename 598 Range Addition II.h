//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_598_RANGE_ADDITION_II_H
#define LEETCODE_598_RANGE_ADDITION_II_H

#include <vector>

using namespace std;

class Solution {
public:
	int maxCount(int m, int n, vector<vector<int>> &ops) {
		int mMin = m, nMin = n;
		for (vector<int> v:ops) {
			if (v[0] < mMin) mMin = v[0];
			if (v[1] < nMin) nMin = v[1];
		}
		return mMin * nMin;
	}
};

#endif //LEETCODE_598_RANGE_ADDITION_II_H
