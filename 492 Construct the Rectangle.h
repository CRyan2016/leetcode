//
// Created by cz on 2017/9/24.
//

#ifndef LEETCODE_492_CONSTRUCT_THE_RECTANGLE_H
#define LEETCODE_492_CONSTRUCT_THE_RECTANGLE_H

#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
	vector<int> constructRectangle(int area) {
		int sq = sqrt(area);
		while (area % sq != 0) sq--;
		return vector<int>({area / sq, sq});
	}
};

#endif //LEETCODE_492_CONSTRUCT_THE_RECTANGLE_H
