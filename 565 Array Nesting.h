//
// Created by cz on 17-7-23.
//

#ifndef ALGORITHRMS_565_ARRAY_NESTING_H
#define ALGORITHRMS_565_ARRAY_NESTING_H

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int arrayNesting(vector<int> &nums) {
        int n = nums.size(), maxSize = 0;
        unordered_map<int, bool> unorderedMap;
        for (int i = 0; i < n; ++i) {
            int index = i, count = 0, tmp;
            while (1) {
                if (unorderedMap.find(index) != unorderedMap.end()) break;
                unorderedMap.insert(std::pair<int, bool>(index, true));
                tmp = nums[index];
                index = tmp;
                count++;
            }
            if (count > maxSize) maxSize = count;
            unorderedMap.clear();
        }
        return maxSize;
    }

    int arrayNesting2(vector<int> &nums) {
        int n = nums.size(), maxSize = 0;
        for (int i = 0; i < n; ++i) {
            int count = 0;
            for (int j = i; nums[j] >= 0; ++count) {
                int ak = nums[j];
                nums[j] = -1;
                j = ak;
            }
            if (count > maxSize) maxSize = count;
        }
        return maxSize;
    }
};

#endif //ALGORITHRMS_565_ARRAY_NESTING_H
