class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minSoFar = prices[0];
        for (int i = 0; i < prices.size(); i++) {
            maxProfit = max(prices[i] - minSoFar, maxProfit);
            minSoFar = min(minSoFar, prices[i]);
        }
        return maxProfit;
    }
};
