//
// Created by cz on 2017/9/19.
//

#ifndef LEETCODE_575_DISTRIBUTE_CANDIES_H
#define LEETCODE_575_DISTRIBUTE_CANDIES_H

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int distributeCandies(vector<int> &candies) {
		unordered_map<int, int> unMap;
		int kind = 0;
		for (int i = 0; i < candies.size(); ++i) {
			if (unMap.find(candies[i]) == unMap.end()) {
				kind++;
				unMap[candies[i]] = 0;
			}
			unMap[candies[i]] += 1;
		}
		int tmp = candies.size() >> 1;
		return tmp > kind ? kind : tmp;
	}
};

#endif //LEETCODE_575_DISTRIBUTE_CANDIES_H
