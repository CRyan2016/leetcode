//
// Created by cz on 17-6-20.
//

#ifndef ALGORITHRMS_26_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H
#define ALGORITHRMS_26_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H

#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if(nums.size()==0)
            return 0;
        int sw = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[sw]) {
                sw++;
                nums[sw] = nums[i];
            }
        }
        for (int i = 0; i < nums.size() - sw - 1; ++i) {
            nums.pop_back();
        }
        return sw+1;
    }
};

#endif //ALGORITHRMS_26_REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H
