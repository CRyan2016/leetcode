//
// Created by cz on 17-6-17.
//

#ifndef ALGORITHRMS_566_RESHAPE_THE_MATRIX_H
#define ALGORITHRMS_566_RESHAPE_THE_MATRIX_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c) {
        if (nums.empty())
            return nums;
        int row = nums.size();
        int col = nums[0].size();
        if (r * c != row * col)
            return nums;
        vector<vector<int>> re(r);
        int total;
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j) {
                total = i * c + j;
                re[i].push_back(nums[total / col][total % col]);
            }
        return re;
    }

    void printVec(vector<vector<int>> &vec) {
        if (vec.empty())
            return;
        int row = vec.size();
        int col = vec[0].size();
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                std::cout << vec[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

#endif //ALGORITHRMS_566_RESHAPE_THE_MATRIX_H
