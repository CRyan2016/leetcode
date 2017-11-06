//
// Created by cz on 2017/10/17.
//

#ifndef LEETCODE_541_REVERSE_STRING_II_H
#define LEETCODE_541_REVERSE_STRING_II_H

#include <vector>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
	string reverseStr(string s, int k) {
		int size = s.size();
		for (int i = 0; i < size;i += 2 * k) {
			for (int m = i, n = min(i + k - 1, size - 1); m < n; ++m, --n) {
				char temp = s[m];
				s[m] = s[n];
				s[n] = temp;
			}
		}
		return s;
	}
};

#endif //LEETCODE_541_REVERSE_STRING_II_H
