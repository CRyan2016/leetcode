//
// Created by cz on 17-6-17.
//

#ifndef ALGORITHRMS_001_TWO_SUM_H
#define ALGORITHRMS_001_TWO_SUM_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, vector<int>> val;
        for (int i = 0; i < nums.size(); ++i) {
            map<int, vector<int>>::iterator iter = val.find(nums[i]);
            if (iter == val.end())
                val.insert(std::pair<int, vector<int>>(nums[i], vector<int>(1, i)));
            else
                iter->second.push_back(i);
        }
        for (map<int, vector<int>>::const_iterator iter = val.begin(); iter != val.end(); ++iter) {
            if (target - iter->first == iter->first) {
                if (iter->second.size() > 1)
                    return vector<int>(iter->second.begin(), iter->second.begin() + 2);
            } else {
                map<int, vector<int>>::const_iterator iter2 = val.find(target - iter->first);
                if (iter2 != val.end())
                    return vector<int>({iter->second.front(), iter2->second.front()});
            }
        }
    }
};

#endif //ALGORITHRMS_001_TWO_SUM_H
