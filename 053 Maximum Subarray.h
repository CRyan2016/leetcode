//
// Created by cz on 17-6-23.
//

#ifndef ALGORITHRMS_053_MAXIMUM_SUBARRAY_H
#define ALGORITHRMS_053_MAXIMUM_SUBARRAY_H

#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int sum, maxSum = nums[0];
        for (int j = 0; j < n; ++j) {
            sum = 0;
            for (int i = j; i < n; ++i) {
                sum += nums[i];
                if(sum>maxSum){
                    maxSum = sum;
                }
                if(sum<0){
                    j=i;
                    break;
                }
            }
        }
        return maxSum;
    }
};

#endif //ALGORITHRMS_053_MAXIMUM_SUBARRAY_H
