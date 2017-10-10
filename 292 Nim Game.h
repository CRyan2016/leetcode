//
// Created by cz on 2017/9/20.
//

#ifndef LEETCODE_292_NIM_GAME_H
#define LEETCODE_292_NIM_GAME_H

class Solution {
public:
	bool canWinNim(int n) {
		return n % 4 == 0 ? false : true;
	}
};

#endif //LEETCODE_292_NIM_GAME_H
