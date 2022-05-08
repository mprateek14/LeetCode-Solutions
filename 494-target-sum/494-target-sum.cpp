class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        
        int sum = 0;
        
        for(int i: nums) sum+= i;
        
        if (abs(target) > sum || (sum + target) % 2 != 0) return 0;
        
        
        int aim = (sum+target)/2;
        
        
        int dp[n+1][aim+1];
        
        for(int i=0; i<n+1; i++){
            for(int j=0; j<aim+1; j++){
                if(i==0) dp[i][j] = 0;
            }
        }
        
        dp[0][0] = 1;
        
        for(int i=1; i<n+1; i++){
            for(int j=0; j<aim+1; j++){
                if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        
        return dp[n][aim];
        
    }
};