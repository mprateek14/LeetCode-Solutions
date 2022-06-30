class Solution {
public:
    int maxProfit(vector<int>& prices) {

        
        int n = prices.size();
        
        int currBuy = prices[0];
        int maxi = 0;
        
        for(int i=1; i<n; i++){
            if(prices[i]<currBuy){
                currBuy = prices[i];
            }
            else if(prices[i]>currBuy){
                maxi = max(maxi, prices[i]-currBuy);
            }
        }
        
        return maxi;
        
    }
};