class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        
        return min(solve(cost, cost.size()-1, dp), solve(cost, cost.size()-2, dp));
        
    }
    
    int solve(vector<int> &cost, int n, vector<int> &dp){
        if(n<0) return 0;
        if(n<=1) return cost[n];
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = cost[n] + min(solve(cost, n-1, dp), solve(cost, n-2, dp));
        
    }
    
    
};