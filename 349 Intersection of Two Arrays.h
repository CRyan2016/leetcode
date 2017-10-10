//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_349_INTERSECTION_OF_TWO_ARRAYS_H
#define LEETCODE_349_INTERSECTION_OF_TWO_ARRAYS_H

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
	vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
		unordered_set<int> m(nums1.begin(), nums1.end());
		vector<int> vec;
		for (int v:nums2) {
			if (m.count(v)) {
				vec.push_back(v);
				m.erase(v);
			}
		}
		return vec;
	}
};

#endif //LEETCODE_349_INTERSECTION_OF_TWO_ARRAYS_H
