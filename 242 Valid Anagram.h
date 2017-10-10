//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_242_VALID_ANAGRAM_H
#define LEETCODE_242_VALID_ANAGRAM_H

#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		return s == t;
	}
};

#endif //LEETCODE_242_VALID_ANAGRAM_H
