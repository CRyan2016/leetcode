//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_387_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H
#define LEETCODE_387_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H

#include <string>

using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {
		int freq[26] = {0};
		for (int i = 0; i < s.size(); ++i) {
			freq[s[i] - 'a']++;
		}
		for (int j = 0; j < s.size(); ++j) {
			if (freq[s[j] - 'a'] == 1) return j;
		}
		return -1;
	}
};

#endif //LEETCODE_387_FIRST_UNIQUE_CHARACTER_IN_A_STRING_H
