class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=1,j=prices.size();
        int mini=prices[0];
        int max=0;
        for(int i=0;i<j;i++){
            if(mini>prices[i]){
                mini=prices[i];
            }
            else if((prices[i]-mini)>max){
                max=prices[i]-mini;
            }
        }
        return max;      
    }
};