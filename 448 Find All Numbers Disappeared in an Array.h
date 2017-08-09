//
// Created by cz on 17-6-20.
//

#ifndef ALGORITHRMS_448_FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H
#define ALGORITHRMS_448_FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        vector<int> re;
        for (int i = 0; i < nums.size(); ++i){
            int m = abs(nums[i])-1;
            nums[m] = nums[m]>0?-nums[m]:nums[m];
        }
        for(int i=0;i<nums.size();++i)
            if(nums[i]>0) re.push_back(i+1);
        return re;
    }
};

#endif //ALGORITHRMS_448_FIND_ALL_NUMBERS_DISAPPEARED_IN_AN_ARRAY_H
