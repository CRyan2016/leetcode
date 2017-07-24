//
// Created by cz on 17-6-18.
//

#ifndef ALGORITHRMS_532_K_DIFF_PAIRS_IN_AN_ARRAY_H
#define ALGORITHRMS_532_K_DIFF_PAIRS_IN_AN_ARRAY_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findPairs(vector<int> &nums, int k) {
        set<int> numsSet;
        int count = 0;
        std::sort(nums.begin(), nums.end());
        if (k == 0) {
            for (int i = 1; i < nums.size(); ++i) {
                if (nums[i] == nums[i - 1]) {
                    count++;
                    while (i < nums.size() && nums[i] == nums[i - 1])++i;
                }
            }
            return count;
        }
        for (int i = 0; i < nums.size(); ++i) {
            auto position = numsSet.find(nums[i] - k);
            if (position != numsSet.end()) {
                count++;
                numsSet.erase(nums[i] - k);
                numsSet.insert(nums[i]);
            } else {
                numsSet.insert(nums[i]);
            }
        }

        return count;
    }

    int findPairs2(vector<int> &nums, int k) {
        if (k < 0) return 0;
        sort(nums.begin(), nums.end());
        int result = 0;
        for (int i = 0, j = 1; i < nums.size(); i++) {
            if (i != 0 && nums[i] == nums[i - 1]) continue;
            j = max(i + 1, j);
            while (nums[j] < nums[i] + k) j++;
            if (nums[j] == nums[i] + k && i != j) {
                result++;
                j++;
            }
        }
        return result;
    }
};

#endif //ALGORITHRMS_532_K_DIFF_PAIRS_IN_AN_ARRAY_H
