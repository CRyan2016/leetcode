//
// Created by cz on 17-6-20.
//

#ifndef ALGORITHRMS_283_MOVE_ZEROES_H
#define ALGORITHRMS_283_MOVE_ZEROES_H

#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int count = 0;
        bool flag = false;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                ++count;
                flag = true;
            } else if (flag) {
                nums[i - count] = nums[i];
            }
        }
        for (int i = nums.size() - 1; i >= int(nums.size() - count); --i) {
            nums[i] = 0;
        }
    }
};

#endif //ALGORITHRMS_283_MOVE_ZEROES_H
