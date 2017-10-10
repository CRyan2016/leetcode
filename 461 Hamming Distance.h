//
// Created by cz on 2017/9/18.
//

#ifndef LEETCODE_461_HAMMING_DISTANCE_H
#define LEETCODE_461_HAMMING_DISTANCE_H

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y;
        int diff = 0;
        while (z) {
            if (z & 0x01) diff++;
            z >>= 1;
        }
        return diff;
    }
};

#endif //LEETCODE_461_HAMMING_DISTANCE_H
