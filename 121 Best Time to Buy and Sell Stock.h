//
// Created by cz on 17-6-22.
//

#ifndef ALGORITHRMS_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
#define ALGORITHRMS_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_H

#include <vector>
#include <climits>

using namespace std;

class Solution{
public:
    int maxProfit(vector<int> &prices){
        int minProfit = INT_MAX;
        int maxProfit = 0;
        for(int i=0;i<prices.size();++i){
            minProfit = min(minProfit,prices[i]);
            maxProfit = max(maxProfit,prices[i]-minProfit);
        }
        return maxProfit;

    }
};

#endif //ALGORITHRMS_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
