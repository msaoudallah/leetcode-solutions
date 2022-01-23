class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell,buy;
        int profit = 0;
        int sellind;
        if (prices.size() == 0) {return 0; }
        else {
            buy = prices[0];
            sell = prices[1];
            sellind = 1;
            for (int i = 0 ; i< prices.size()-1; i++) {
                 if (profit < sell - buy) {
                    profit = sell - buy;
                }
                if (buy > sell) {
                    buy = sell;
                }
                sell = prices[sellind+1];
                sellind++;
            }
        }
        return profit;
    }
};