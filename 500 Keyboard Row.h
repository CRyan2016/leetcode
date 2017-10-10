//
// Created by cz on 2017/9/19.
//

#ifndef LEETCODE_500_KEYBOARD_ROW_H
#define LEETCODE_500_KEYBOARD_ROW_H

#include <vector>
#include <string>
#include <cctype>
#include <map>

using namespace std;

class Solution {
public:
	vector<string> findWords(vector<string> &words) {
		string str[] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
		map<char, int> char2int;
		for (int i = 0; i < 3; ++i)
			for (int j = 0; j < str[i].length(); ++j)
				char2int.insert(pair<char, int>(str[i][j],
				                                i));
		vector<string> vec;
		for (string word: words) {
			bool flag = true;
			int type;
			for (char c:word) {
				type = char2int[tolower(c)];
				if (type != char2int[tolower(word[0])]) {
					flag = false;
					break;
				}
			}
			if (flag) vec.push_back(word);
		}
		return vec;
	}

};

#endif //LEETCODE_500_KEYBOARD_ROW_H
