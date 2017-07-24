//
// Created by cz on 17-6-20.
//

#ifndef ALGORITHRMS_485_MAX_CONSECUTIVE_ONES_H
#define ALGORITHRMS_485_MAX_CONSECUTIVE_ONES_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        if (nums.size() == 0)
            return 0;
        int max = 0, lastIndex = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                if (i - lastIndex > max)
                    max = i - lastIndex;
                lastIndex = i + 1;
            }
        }
        if (nums[nums.size() - 1] != 0) {
            if (nums.size() - lastIndex > max)
                max = nums.size() - lastIndex;
        }
        return max;
    }
};

#endif //ALGORITHRMS_485_MAX_CONSECUTIVE_ONES_H
