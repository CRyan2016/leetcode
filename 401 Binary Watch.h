//
// Created by cz on 2017/10/10.
//

#ifndef LEETCODE_401_BINARY_WATCH_H
#define LEETCODE_401_BINARY_WATCH_H

#include <string>
#include <vector>
#include <bitset>

using namespace std;

class Solution {
public:
	vector<string> readBinaryWatch(int num) {
		vector<string> re;
		for (int i = 0; i < 12; ++i) {
			for (int j = 0; j < 60; ++j) {
				if (bitset<10>(i << 6 | j).count() == num) {
					re.emplace_back(to_string(i) + (j < 10 ? ":0" : ":") + to_string(j));
				}
			}
		}
		return re;
	}
};

#endif //LEETCODE_401_BINARY_WATCH_H
