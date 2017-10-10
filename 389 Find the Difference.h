//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_389_FIND_THE_DIFFERENCE_H
#define LEETCODE_389_FIND_THE_DIFFERENCE_H

#include <map>
#include <string>

using namespace std;

class Solution {
public:
	char findTheDifference(string s, string t) {
		map<char, int> count;
		for (char c:s) {
			if (count.find(c) == count.end()) count[c] = 1;
			else count[c]++;
		}
		for (char c:t) {
			count[c]--;
		}
		for (pair<char, int> p:count) {
			if (p.second) return p.first;
		}
	}

	char findTheDifference02(string s, string t) {
		char r = 0;
		for (char c:s) r ^= c;
		for (char c:t) r ^= c;
		return r;
	}
};

#endif //LEETCODE_389_FIND_THE_DIFFERENCE_H
