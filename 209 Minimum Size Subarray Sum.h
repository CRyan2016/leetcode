//
// Created by cz on 17-7-20.
//

#ifndef ALGORITHRMS_209_MINIMUM_SIZE_SUBARRAY_SUM_H
#define ALGORITHRMS_209_MINIMUM_SIZE_SUBARRAY_SUM_H

#include <vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int> &nums) {
        int n = nums.size(), total = n + 1;
        if (n <= 0 || s <= 0) return 0;
        int first = 0, second = 0, sum = nums[0];
        while (first < n && second < n) {
            if (sum >= s) {
                int tmp = second - first + 1;
                if (tmp < total) total = tmp;
                sum -= nums[first];
                first++;
            } else {
                second++;
                sum += nums[second];
            }
        }
        return total > n ? 0 : total;
    }
};

#endif //ALGORITHRMS_209_MINIMUM_SIZE_SUBARRAY_SUM_H
