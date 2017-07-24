//
// Created by cz on 17-6-22.
//

#ifndef ALGORITHRMS_268_MISSING_NUMBER_H
#define ALGORITHRMS_268_MISSING_NUMBER_H

#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &nums) {
        int n = nums.size();
        int total = (n * n + n) / 2;
        for (int i=0;i<n;++i){
            total -= nums[i];
        }
        return total;
    }
};

#endif //ALGORITHRMS_268_MISSING_NUMBER_H
