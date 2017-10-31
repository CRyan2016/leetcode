//
// Created by cz on 2017/10/11.
//

#ifndef LEETCODE_551_STUDENT_ATTENDANCE_RECORD_I_H
#define LEETCODE_551_STUDENT_ATTENDANCE_RECORD_I_H

#include <string>

using namespace std;

class Solution {
public:
	bool checkRecord(string s) {
		int a = 0, l = 0;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'A') a++;
			if (s[i] == 'L') l++;
			else l = 0;
			if (a > 1 || l > 2) return false;
		}
		return true;
	}
};

#endif //LEETCODE_551_STUDENT_ATTENDANCE_RECORD_I_H
