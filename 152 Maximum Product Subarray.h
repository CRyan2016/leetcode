//
// Created by cz on 17-7-22.
//

#ifndef ALGORITHRMS_152_MAXIMUM_PRODUCT_SUBARRAY_H
#define ALGORITHRMS_152_MAXIMUM_PRODUCT_SUBARRAY_H

#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &nums) {
        int n = nums.size();
        int sum = 1, max = nums[0];
        int sum2 = 1, max2 = nums[n - 1];
        for (int i = 0, j = n - 1; i < n; ++i, --j) {
            sum *= nums[i];
            if (max <= sum) max = sum;
            if (max < nums[i]) max = nums[i];
            if (sum == 0) sum = 1;
            sum2 *= nums[j];
            if (max2 <= sum2) max2 = sum2;
            if (max2 < nums[j]) max2 = nums[j];
            if (sum2 == 0) sum2 = 1;
        }
        return max > max2 ? max : max2;
    }
};

#endif //ALGORITHRMS_152_MAXIMUM_PRODUCT_SUBARRAY_H
