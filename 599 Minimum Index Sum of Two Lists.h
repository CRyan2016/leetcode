//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_599_MINIMUM_INDEX_SUM_OF_TWO_LISTS_H
#define LEETCODE_599_MINIMUM_INDEX_SUM_OF_TWO_LISTS_H

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<string> findRestaurant(vector<string> &list1, vector<string> &list2) {
		unordered_map<string, int> uMap;
		for (int i = 0; i < list1.size(); ++i) {
			uMap[list1[i]] = i;
		}
		int minSum = list1.size() + list2.size() - 1;
		vector<string> vec;
		for (int j = 0; j < list2.size(); ++j) {
			if (uMap.count(list2[j])) {
				if (j + uMap[list2[j]] < minSum) {
					minSum = j + uMap[list2[j]];
					vec.clear();
					vec.push_back(list2[j]);
				} else if (j + uMap[list2[j]] == minSum) {
					vec.push_back(list2[j]);
				}
			}
		}
		return vec;
	}
};

#endif //LEETCODE_599_MINIMUM_INDEX_SUM_OF_TWO_LISTS_H
