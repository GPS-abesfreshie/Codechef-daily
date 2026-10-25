class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=prices[0];
        int profit=0;
        for(int i=1;i<=prices.size()-1;i++){
            if(prices[i]<min_price){
                min_price=prices[i];
            }
            else if((prices[i]-min_price)>profit){
                profit=(prices[i]-min_price);
            }
        }
        return profit;        
    }
};