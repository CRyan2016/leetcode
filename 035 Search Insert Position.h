//
// Created by cz on 17-6-22.
//

#ifndef ALGORITHRMS_035_SEARCH_INSERT_POSITION_H
#define ALGORITHRMS_035_SEARCH_INSERT_POSITION_H

#include <vector>
using namespace std;

class Solution{
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high = nums.size()-1,middle;
        while(low<=high){
            middle = (low+high)/2;
            if(target==nums[middle])
                return middle;
            else if(target>nums[middle])
                low = middle+1;
            else
                high = middle-1;
        }
        return low;
    }
};

#endif //ALGORITHRMS_035_SEARCH_INSERT_POSITION_H
