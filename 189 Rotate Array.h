//
// Created by cz on 17-6-22.
//

#ifndef ALGORITHRMS_189_ROTATE_ARRAY_H
#define ALGORITHRMS_189_ROTATE_ARRAY_H

#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int> &nums, int k) {
        int n = nums.size(), n2 = n;
        int temp = nums[0], index = 0, startIndex = 0, m, temp2;
        while (n2--) {
            m = (index + k) % n;
            temp2 = nums[m];
            nums[m] = temp;
            if (m == startIndex) {
                index = ++startIndex;
                temp2 = nums[index];
            } else {
                index = m;
            }
            temp = temp2;
        }
    }
};

#endif //ALGORITHRMS_189_ROTATE_ARRAY_H
