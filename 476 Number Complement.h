//
// Created by cz on 2017/9/19.
//

#ifndef LEETCODE_476_NUMBER_COMPLEMENT_H
#define LEETCODE_476_NUMBER_COMPLEMENT_H

#include <vector>
using namespace std;

class Solution {
public:
	int findComplement(int num) {
		int n = 1,old = num;
		while (num){
			num >>= 1;
			n <<= 1;
		}
		return old^(n-1);

	}
};

#endif //LEETCODE_476_NUMBER_COMPLEMENT_H
