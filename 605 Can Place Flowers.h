//
// Created by cz on 17-7-4.
//

#ifndef ALGORITHRMS_605_CAN_PLACE_FLOWERS_H
#define ALGORITHRMS_605_CAN_PLACE_FLOWERS_H

#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        int len = flowerbed.size();
        if (n == 0) return true;
        if (n == 1) {
            if (len == 1) {
                if (flowerbed[0] == 0) return true;
            }
            if (len == 2) {
                if (flowerbed[0] + flowerbed[1] == 0) return true;
            }
        }
        if (len < 3) return false;
        for (int i = 1; i < len; ++i) {
            if (flowerbed[i] == 1) {
                continue;
            } else if (flowerbed[i - 1] == 1) {
                flowerbed[i] = -1;
                continue;
            } else if (flowerbed[i - 1] == -1) {
                continue;
            } else if (!flowerbed[i] && !flowerbed[i - 1]) {
                flowerbed[i] = -1;
                --n;
            }
        }
        if (flowerbed[len - 2] == -1 && flowerbed[len - 1] == 0) --n;
        return n <= 0;
    }
};

#endif //ALGORITHRMS_605_CAN_PLACE_FLOWERS_H
