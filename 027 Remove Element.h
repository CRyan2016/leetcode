//
// Created by cz on 17-6-20.
//

#ifndef ALGORITHRMS_27_REMOVE_ELEMENT_H
#define ALGORITHRMS_27_REMOVE_ELEMENT_H

#include <vector>

using namespace std;

class Solution{
public:
    int removeElement(vector<int>& nums, int val) {
        int sw = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=val){
                nums[sw++] = nums[i];
            }
        }
        return sw;
    }
};

#endif //ALGORITHRMS_27_REMOVE_ELEMENT_H
