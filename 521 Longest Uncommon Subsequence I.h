//
// Created by cz on 2017/9/20.
//

#ifndef LEETCODE_521_LONGEST_UNCOMMON_SUBSEQUENCE_I_H
#define LEETCODE_521_LONGEST_UNCOMMON_SUBSEQUENCE_I_H

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int findLUSlength(string a, string b) {
		return a == b ? -1 : max(a.length(), b.length());
	}
};

#endif //LEETCODE_521_LONGEST_UNCOMMON_SUBSEQUENCE_I_H
