//
// Created by cz on 17-6-22.
//

#ifndef ALGORITHRMS_581_SHORTEST_UNSORTED_CONTINUOUS_SUBARRAY_H
#define ALGORITHRMS_581_SHORTEST_UNSORTED_CONTINUOUS_SUBARRAY_H

#include <vector>

using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int> &nums) {
        int size = nums.size();
        int left = 0;
        int is_sorted = true;
        for (int i = 1; i < size; ++i) {
            if (nums[i] < nums[i - 1]) {
                left = i - 1;
                is_sorted = false;
                break;
            }
        }
        if(is_sorted)
            return 0;
        int right = size - 1;
        for (int i = right; i > 0; --i) {
            if (nums[i] < nums[i - 1]) {
                right = i;
                break;
            }
        }
        int max = nums[left], min = nums[left];
        for (int i = left + 1; i <= right; ++i) {
            if (nums[i] > max)
                max = nums[i];
            if (nums[i] < min)
                min = nums[i];
        }
        for (int i = 0; i < left; ++i) {
            if (nums[i] > min) {
                left = i;
                break;
            }
        }
        for (int i = size - 1; i > right; --i) {
            if (nums[i] < max) {
                right = i;
                break;
            }
        }
        return right - left + 1;
    }
};

#endif //ALGORITHRMS_581_SHORTEST_UNSORTED_CONTINUOUS_SUBARRAY_H
