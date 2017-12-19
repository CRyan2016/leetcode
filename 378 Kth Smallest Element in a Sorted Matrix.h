//
// Created by cz on 2017/12/11.
//

#ifndef LEETCODE_378_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX_H
#define LEETCODE_378_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX_H

#include <vector>

using namespace std;

class Solution {
public:
	int kthSmallest(vector<vector<int>> &matrix, int k) {
		int n = matrix.size();
		int start = matrix[0][0], end = matrix[n - 1][n - 1] + 1; //[start,end)
		while (start < end) {
			int mid = start + (end - start) / 2;
			int count = 0, j = n - 1;
			for (int i = 0; i < n; ++i) {
				while (j >= 0 && matrix[i][j] > mid) j--;
				count += (j + 1);
			}
			if (count < k) start = mid + 1;
			else end = mid;
		}
		return start;
	}
};

#endif //LEETCODE_378_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX_H
