//
// Created by cz on 17-7-24.
//

#ifndef ALGORITHRMS_120_TRIANGLE_H
#define ALGORITHRMS_120_TRIANGLE_H

#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>> &triangle) {
        int n = triangle.size();
        auto val = static_cast<vector<int> &&>(triangle.back());
        vector<int> minlen(val);
        for (int layer = n-2; layer >= 0; layer--) // For each layer
        {
            for (int i = 0; i <= layer; i++) // Check its every 'node'
            {
                // Find the lesser of its two children, and sum the current value in the triangle with it.
                minlen[i] = min(minlen[i], minlen[i+1]) + triangle[layer][i];
            }
        }
        return minlen[0];

    }
};

#endif //ALGORITHRMS_120_TRIANGLE_H
