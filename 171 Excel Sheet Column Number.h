//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_171_EXCEL_SHEET_COLUMN_NUMBER_H
#define LEETCODE_171_EXCEL_SHEET_COLUMN_NUMBER_H

#include <string>

using namespace std;

class Solution {
public:
	int titleToNumber(string s) {
		int title = 0;
		for (char c :s) {
			title = title * 26 + c - 'A' + 1;
		}
		return title;
	}
};

#endif //LEETCODE_171_EXCEL_SHEET_COLUMN_NUMBER_H
