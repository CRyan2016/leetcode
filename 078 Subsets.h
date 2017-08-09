//
// Created by cz on 17-7-25.
//

#ifndef ALGORITHRMS_078_SUBSETS_H
#define ALGORITHRMS_078_SUBSETS_H

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> re;
        int limit = 1 << nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < limit; ++i) {
            vector<int> tmp;
            int p = i, count = 0;
            while (p) {
                if (p & 1 == 1) tmp.push_back(nums[count]);
                p >>= 1;
                count++;
            }
            re.push_back(tmp);
        }
        return re;
    }
};

#endif //ALGORITHRMS_078_SUBSETS_H
