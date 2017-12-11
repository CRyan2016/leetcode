//
// Created by cz on 2017/12/7.
//

#ifndef LEETCODE_278_FIRST_BAD_VERSION_H
#define LEETCODE_278_FIRST_BAD_VERSION_H

#include <vector>

using namespace std;

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {
		int start = 1, end = n + 1;
		while (start < end) {
//			避免start+end溢出
			int mid = start + (end - start) / 2;
			if (isBadVersion(mid)) {
				end = mid;
			} else {
				start = mid + 1;
			}
		}
		return start;
	}
};

#endif //LEETCODE_278_FIRST_BAD_VERSION_H
