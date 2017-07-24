//
// Created by cz on 17-7-21.
//

#ifndef ALGORITHRMS_162_FIND_PEAK_ELEMENT_H
#define ALGORITHRMS_162_FIND_PEAK_ELEMENT_H

#include <vector>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int> &nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return i;
            }
        }
        return n - 1;
    }
};

#endif //ALGORITHRMS_162_FIND_PEAK_ELEMENT_H
