//
// Created by cz on 2017/9/26.
//

#ifndef LEETCODE_447_NUMBER_OF_BOOMERANGS_H
#define LEETCODE_447_NUMBER_OF_BOOMERANGS_H

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int numberOfBoomerangs(vector<pair<int, int>> &points) {
		int booms = 0;
		for (auto &p:points) {
			unordered_map<double, int> group(points.size());
			for (auto &q:points) {
				booms += 2 * group[(p.first - q.first) * (p.first - q.first) + (p.second - q.second) * (p.second - q.second)]++;
			}
		}
		return booms;
	}
};

#endif //LEETCODE_447_NUMBER_OF_BOOMERANGS_H
