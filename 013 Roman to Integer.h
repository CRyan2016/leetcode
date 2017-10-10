//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_013_ROMAN_TO_INTEGER_H
#define LEETCODE_013_ROMAN_TO_INTEGER_H

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		unordered_map<char,int> uMap={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
		int index = 0, val = 0, size = s.size();
		while (index < size) {
			if (index + 1 < size) {
				if (uMap[s[index + 1]] > uMap[s[index]]) {
					val += uMap[s[index + 1]] - uMap[s[index]];
					index += 2;
				} else {
					val += uMap[s[index]];
					index++;
				}
			} else {
				val += uMap[s[index]];
				break;
			}
		}
		return val;
	}
};

#endif //LEETCODE_013_ROMAN_TO_INTEGER_H
