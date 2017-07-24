//
// Created by cz on 17-7-19.
//

#ifndef ALGORITHRMS_118_PASCAL_S_TRIANGLE_H
#define ALGORITHRMS_118_PASCAL_S_TRIANGLE_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums(numRows);
        for (int i = 0; i < numRows; ++i) {
            nums[i].resize(i + 1);
            nums[i][0] = nums[i][i] = 1;
            for (int j = 1; j < i; ++j)
                nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];
        }
        return nums;
    }
};

#endif //ALGORITHRMS_118_PASCAL_S_TRIANGLE_H
