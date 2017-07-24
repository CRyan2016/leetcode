//
// Created by cz on 17-6-16.
//

#ifndef ALGORITHRMS_066_PLUS_ONE_H
#define ALGORITHRMS_066_PLUS_ONE_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int overflow = 1;
        int re = 0;
        for (int i = digits.size() - 1; i >= 0; --i) {
            re = digits[i] + overflow;
            overflow = re / 10;
            digits[i] = re % 10;
        }
        if(overflow){
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }
};


#endif //ALGORITHRMS_066_PLUS_ONE_H
