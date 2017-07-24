//
// Created by cz on 17-7-18.
//

#ifndef ALGORITHRMS_628_MAXIMUM_PRODUCT_OF_THREE_NUMBERS_H
#define ALGORITHRMS_628_MAXIMUM_PRODUCT_OF_THREE_NUMBERS_H

#include <vector>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int> &nums) {
        int n = nums.size();
        if (n < 3) return 0;
        int i = 2;
        while (i--) {
            for (int i = n - 2; i > -1; --i) {
                if (nums[i] > nums[i + 1]) swap(&nums[i], &nums[i + 1]);
            }
        }
        i = 3;
        while (i--) {
            for (int i = 1; i < n; ++i) {
                if (nums[i] < nums[i - 1]) swap(&nums[i], &nums[i - 1]);
            }
        }
        int a = nums[0] * nums[1] * nums[n - 1], b = nums[n - 1] * nums[n - 2] * nums[n - 3];
        if (a > b) return a;
        else return b;
    }

    void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
};

#endif //ALGORITHRMS_628_MAXIMUM_PRODUCT_OF_THREE_NUMBERS_H
