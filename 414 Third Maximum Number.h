//
// Created by cz on 17-6-18.
//

#ifndef ALGORITHRMS_414_THIRD_MAXIMUM_NUMBER_H
#define ALGORITHRMS_414_THIRD_MAXIMUM_NUMBER_H

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution{
public:
    int thirdMax(vector<int> &nums){
        set<int> numSet(nums.begin(),nums.end());
        if(numSet.size()>=3){
            auto iter = numSet.rbegin();
            int i = 2;
            while(i-->0) iter = next(iter);
            return *iter;
        }
        else
            return *(numSet.rbegin());
    }
};

#endif //ALGORITHRMS_414_THIRD_MAXIMUM_NUMBER_H
