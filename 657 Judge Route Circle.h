//
// Created by cz on 2017/9/18.
//

#ifndef LEETCODE_657_JUDGE_ROUTE_CIRCLE_H
#define LEETCODE_657_JUDGE_ROUTE_CIRCLE_H

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	bool judgeCircle(string moves) {
		int U = 0, D = 0, L = 0, R = 0;
		for (int i = 0; i < moves.length(); ++i) {
			switch (moves[i]) {
				case 'U':
					U++;
					break;
				case 'D':
					D++;
					break;
				case 'L':
					L++;
					break;
				case 'R':
					R++;
					break;
				default:
					break;
			}
		}
		if (U == D && L == R) return true;
//		for (int j = 0; j < moves.length(); ++j) {
//			switch (moves[j]) {
//				case 'U':
//					U--;
//					break;
//				case 'D':
//					D--;
//					break;
//				case 'L':
//					L--;
//					break;
//				case 'R':
//					R--;
//					break;
//				default:
//					break;
//			}
//		}
		return false;
	}
};

#endif //LEETCODE_657_JUDGE_ROUTE_CIRCLE_H
