//
// Created by cz on 2017/12/10.
//

#ifndef LEETCODE_069_SQRT_X_H
#define LEETCODE_069_SQRT_X_H


class Solution {
public:
	int mySqrt(int x) {
		int start = 1, end = x / 2 + 2;
		while (start < end) {
			int mid = start + (end - start) / 2;
			if (mid > x / mid) {
				end = mid;
			} else if (mid < x / mid) {
				start = mid + 1;
			} else {
				start = mid + 1;
				break;
			}
		}
		return start - 1;
	}
};

#endif //LEETCODE_069_SQRT_X_H
