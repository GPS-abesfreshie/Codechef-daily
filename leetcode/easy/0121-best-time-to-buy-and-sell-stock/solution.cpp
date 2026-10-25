class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Handle empty or single-element arrays safely
        if (prices.size() < 2) return 0;
        
        int min_price = prices[0]; // Tracks the cheapest buy day seen so far
        int max_profit = 0;        // Tracks the highest profit found
        
        for (int i = 1; i < prices.size(); i++) {
            // 1. If today's price is cheaper than our lowest recorded price, update it
            if (prices[i] < min_price) {
                min_price = prices[i];
            } 
            // 2. Otherwise, check if selling today yields a better profit
            else if (prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            }
        }
        
        return max_profit;        
    }
};
