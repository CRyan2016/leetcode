//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_168_EXCEL_SHEET_COLUMN_TITLE_H
#define LEETCODE_168_EXCEL_SHEET_COLUMN_TITLE_H

#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	string convertToTitle(int n) {
		string str;
		while (n) {
			str.push_back((n - 1) % 26 + 'A');
			n = (n - 1) / 26;
		}
		reverse(str.begin(), str.end());
		return str;
	}
};

#endif //LEETCODE_168_EXCEL_SHEET_COLUMN_TITLE_H
