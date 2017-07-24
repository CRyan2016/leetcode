//
// Created by cz on 17-6-20.
//

#ifndef ALGORITHRMS_167_TWO_SUM_II_INPUT_ARRAY_IS_SORTED_H
#define ALGORITHRMS_167_TWO_SUM_II_INPUT_ARRAY_IS_SORTED_H

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int len = numbers.size();
        for (int i = 0; i < len; ++i) {
            int re = binarySearch(numbers, i + 1, len - 1, target - numbers[i]);
            if (re != -1) {
                return vector<int>({i + 1, re + 1});
            }
        }
        return vector<int>();
    }

    int binarySearch(vector<int> &numbers, int start, int stop, int key) {
        int middle = (start + stop) / 2;
        do {
            if (numbers[middle] > key)
                stop = middle - 1;
            else if (numbers[middle] < key)
                start = middle + 1;
            else {
                return middle;
            }
            middle = (start + stop) / 2;
        } while (stop - start + 1 > 0);
        return -1;
    }
};

#endif //ALGORITHRMS_167_TWO_SUM_II_INPUT_ARRAY_IS_SORTED_H
