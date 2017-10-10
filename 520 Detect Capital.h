//
// Created by cz on 2017/9/21.
//

#ifndef LEETCODE_520_DETECT_CAPITAL_H
#define LEETCODE_520_DETECT_CAPITAL_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	bool detectCapitalUse(string word) {
		if (word.empty()) return false;
		if (word.length() == 1) return true;
		bool flag, flag2;
		if (isupper(word[0])) flag = true;
		else flag = false;
		if (isupper(word[1])) flag2 = true;
		else flag2 = false;
		for (int i = 2; i < word.length(); ++i) {
			if ((bool)islower(word[i]) == flag2 || (bool)isupper(word[i]) != flag2) return false;
		}
		if (flag == false && flag2 == true) return false;
		return true;
	}
};


#endif //LEETCODE_520_DETECT_CAPITAL_H
