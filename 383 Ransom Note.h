//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_383_RANSOM_NOTE_H
#define LEETCODE_383_RANSOM_NOTE_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		vector<int> vec(26, 0);
		for (char c:magazine) vec[c - 'a']++;
		for (char c:ransomNote) {
			if (--vec[c - 'a'] < 0) return false;
		}
		return true;
	}
};

#endif //LEETCODE_383_RANSOM_NOTE_H
