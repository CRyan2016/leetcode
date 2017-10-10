//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_455_ASSIGN_COOKIES_H
#define LEETCODE_455_ASSIGN_COOKIES_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int findContentChildren(vector<int> &g, vector<int> &s) {
		sort(g.begin(), g.end());
		sort(s.begin(), s.end());
		vector<int>::const_iterator itr1 = g.cbegin();
		vector<int>::const_iterator itr2 = s.cbegin();
		int count = 0;
		while (itr1 != g.cend() && itr2 != s.cend()) {
			if (*itr1 <= *itr2) {
				itr1++;
				itr2++;
				count++;
			} else {
				itr2++;
			}
		}
		return count;
	}
};

#endif //LEETCODE_455_ASSIGN_COOKIES_H
