//
// Created by cz on 17-7-19.
//

#ifndef ALGORITHRMS_219_CONTAINS_DUPLICATE_II_H
#define ALGORITHRMS_219_CONTAINS_DUPLICATE_II_H

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k) {
        map<int, int> numsMap;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            auto it = numsMap.find(nums[i]);
            if (it == numsMap.end()) {
                numsMap.insert(std::pair<int, int>(nums[i], i));
            } else {
                if (i - (it->second) <= k) return true;
                it->second = i;
            }
        }
        return false;
    }
};

#endif //ALGORITHRMS_219_CONTAINS_DUPLICATE_II_H
