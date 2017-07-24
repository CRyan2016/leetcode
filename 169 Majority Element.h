//
// Created by cz on 17-6-22.
//

#ifndef ALGORITHRMS_169_MAJORITY_ELEMENT_H
#define ALGORITHRMS_169_MAJORITY_ELEMENT_H

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int> &nums) {
        unordered_map<int, int> counts;
        for (int i = 0; i < nums.size(); ++i) {
            if (++counts[nums[i]] > nums.size() / 2)
                return nums[i];
        }
    }

    int majorityElement2(vector<int> &nums) {
        int count = 0, major;
        for (int i = 0; i < nums.size(); ++i) {
            if (!count) {
                count++;
                major = nums[i];
            } else {
                count += major == nums[i] ? 1 : -1;
            }
        }
        return major;
    }
};

#endif //ALGORITHRMS_169_MAJORITY_ELEMENT_H
