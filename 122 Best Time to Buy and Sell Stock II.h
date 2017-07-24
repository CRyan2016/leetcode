//
// Created by cz on 17-6-22.
//

#ifndef ALGORITHRMS_122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H
#define ALGORITHRMS_122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H

#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        if (n == 0)
            return 0;
        vector<int> increaseSeq;
        for (int i = 1; i < n; ++i) {
            if (prices[i] > prices[i - 1]) {
                increaseSeq.push_back(i-1);
                ++i;
                while (i < n && prices[i] > prices[i - 1]) ++i;
                increaseSeq.push_back(i - 1);
            }
        }
        int sum = 0;
        for (int i = 1; i < increaseSeq.size(); i += 2) {
            sum += prices[increaseSeq[i]] - prices[increaseSeq[i - 1]];
        }
        return sum;
    }
};

#endif //ALGORITHRMS_122_BEST_TIME_TO_BUY_AND_SELL_STOCK_II_H
