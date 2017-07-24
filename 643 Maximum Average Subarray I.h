//
// Created by cz on 17-7-18.
//

#ifndef ALGORITHRMS_643_MAXIMUM_AVERAGE_SUBARRAY_I_H
#define ALGORITHRMS_643_MAXIMUM_AVERAGE_SUBARRAY_I_H

#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int> &nums, int k) {
        int n = nums.size();
        if (n < k) return 0;
        double sum = 0.0;
        for (int i = 0; i < k; ++i) sum += nums[i];
        double maxSum = sum;
        for (int i = k; i < n; ++i) {
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum * 1.0 / k;
    }
};

#endif //ALGORITHRMS_643_MAXIMUM_AVERAGE_SUBARRAY_I_H
