//
// Created by cz on 17-7-18.
//

#ifndef ALGORITHRMS_217_CONTAINS_DUPLICATE_H
#define ALGORITHRMS_217_CONTAINS_DUPLICATE_H

#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
};

#endif //ALGORITHRMS_217_CONTAINS_DUPLICATE_H
