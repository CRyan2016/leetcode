//
// Created by cz on 17-6-18.
//

#ifndef ALGORITHRMS_561_ARRAY_PARTITION_I_H
#define ALGORITHRMS_561_ARRAY_PARTITION_I_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int> &nums) {
        std::sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size(); i = i + 2) {
            sum += nums[i];
        }
        return sum;
    }

    int arrayPairSum2(vector<int> &nums) {
        vector<int> hash(200001, 0);
        for (int i = 0; i < nums.size(); ++i) {
            hash[nums[i] + 10000]++;
        }
        int sum = 0;
        bool flag = true;
        for (int i = 0; i < hash.size(); ++i) {
            while (hash[i]) {
                if (flag) {
                    sum += i - 10000;
                }
                flag = !flag;
                hash[i]--;
            }
        }
        return sum;
    }
};

#endif //ALGORITHRMS_561_ARRAY_PARTITION_I_H
