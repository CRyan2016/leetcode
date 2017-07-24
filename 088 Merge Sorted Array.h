//
// Created by cz on 17-7-18.
//

#ifndef ALGORITHRMS_088_MERGE_SORTED_ARRAY_H
#define ALGORITHRMS_088_MERGE_SORTED_ARRAY_H

#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        // 从函数参数上来看,m n已知,题目上nums1的空间大小>=(m+n),因此可以从后往前排
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i > -1 && j > -1) nums1[k--] = (nums1[i] > nums2[j]) ? nums1[i--] : nums2[j--];
        while (j>-1) nums1[k--]=nums2[j--];
    }
};

#endif //ALGORITHRMS_088_MERGE_SORTED_ARRAY_H
