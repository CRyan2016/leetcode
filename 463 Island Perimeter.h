//
// Created by cz on 2017/9/20.
//

#ifndef LEETCODE_463_ISLAND_PERIMETER_H
#define LEETCODE_463_ISLAND_PERIMETER_H

#include <vector>

using namespace std;


class Solution {
public:
	int islandPerimeter(vector<vector<int>> &grid) {
		int count = 0, repeat = 0;
		for (int i = 0; i < grid.size(); ++i) {
			for (int j = 0; j < grid[i].size(); ++j) {
				if (grid[i][j] == 1) {
					count++;
					if (j > 0 && grid[i][j - 1] == 1) repeat++;
					if (i > 0 && grid[i - 1][j] == 1) repeat++;
				}
			}
		}
		return count * 4 - repeat * 2;
	}
};

#endif //LEETCODE_463_ISLAND_PERIMETER_H
