//
// Created by cz on 2017/9/25.
//

#ifndef LEETCODE_661_IMAGE_SMOOTHER_H
#define LEETCODE_661_IMAGE_SMOOTHER_H

#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> imageSmoother(vector<vector<int>> &M) {
		int row = M.size();
		if (!row) return vector<vector<int>>();
		int col = M[0].size();
		vector<vector<int>> dirs = {{0,-1},{0,1},{1,0},{-1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
		for (int i = 0; i <row ; ++i) {
			for (int j = 0; j <col ; ++j) {
				int sum = M[i][j], count = 1;
				for (int k = 0; k <dirs.size() ; ++k) {
					int x = i+dirs[k][0],y=j+dirs[k][1];
					if (x < 0 || x > row - 1 || y < 0 || y > col - 1) continue;
					sum += (M[x][y] & 0xFF);
					count++;
				}
				M[i][j] |= ((sum / count) << 8);
			}
		}
		for (int l = 0; l <row ; ++l) {
			for (int i = 0; i <col ; ++i) {
				M[l][i] >>= 8;
			}
		}
		return M;
	}
};

#endif //LEETCODE_661_IMAGE_SMOOTHER_H
