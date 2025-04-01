class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy = prices[0];
        int profit = 0;

        for(int i = 0; i < prices.size(); i++) {
            profit = max(profit, prices[i] - minBuy);
            minBuy = std::min(minBuy, prices[i]);
        }

        return profit;
    }
};
