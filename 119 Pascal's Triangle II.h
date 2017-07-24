//
// Created by cz on 17-6-23.
//

#ifndef ALGORITHRMS_119_PASCAL_S_TRIANGLE_II_H
#define ALGORITHRMS_119_PASCAL_S_TRIANGLE_II_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> re(rowIndex + 1, 0);
        for (int i = 0; i <= rowIndex / 2; ++i) {
            int te = solve(rowIndex, i);
            re[i] = te;
        }
        int j;
        if (rowIndex & 0x01)
            j = rowIndex / 2;
        else
            j = rowIndex / 2 - 1;
        for (int i = rowIndex / 2 + 1; i < re.size(); ++i) {
            re[i] = re[j--];
        }
        return re;
    }

    int solve(int rowIndex, int index) {
        if (index == 0)
            return 1;
        if (index < 0)
            return 0;
        if (index > rowIndex)
            return 0;
        return solve(rowIndex - 1, index) + solve(rowIndex - 1, index - 1);
    }

    vector<int> getRow2(int rowIndex) {
        vector<int> re(rowIndex + 1, 0);
        re[0] = 1;
        for (int i = 1; i <= rowIndex; ++i) {
            for (int j = i; j > 0; --j) {
                re[j] += re[j - 1];
            }
        }
        return re;
    }
};

#endif //ALGORITHRMS_119_PASCAL_S_TRIANGLE_II_H
