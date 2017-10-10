//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_409_LONGEST_PALINDROME_H
#define LEETCODE_409_LONGEST_PALINDROME_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	int longestPalindrome(string s) {
		vector<int> re('z' - 'A' + 1, 0);
		for (char c:s) re[c - 'A']++;
		bool ood = false;
		int sum = 0;
		for (int i = 0; i < re.size(); ++i) {
			if (re[i] > 1) {
				if (re[i] % 2 == 0) sum += re[i];
				else {
					sum += re[i] - 1;
					ood = true;
				}
			} else if (re[i] == 1) {
				ood = true;
			}
		}
		if (ood) sum++;
		return sum;
	}
};

#endif //LEETCODE_409_LONGEST_PALINDROME_H
