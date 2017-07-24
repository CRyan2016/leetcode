//
// Created by cz on 17-7-22.
//

#ifndef ALGORITHRMS_153_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H
#define ALGORITHRMS_153_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H

#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int min = nums[0];
        for (int i = 1; i < n; ++i) {
            if (nums[i] < min)
                min = nums[i];
        }
        return min;
    }
};

#endif //ALGORITHRMS_153_FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H
