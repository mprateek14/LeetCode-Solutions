class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> memo(n, -1);
        
        return robber(nums, n-1, memo);
        
    }
    
    
    int robber(vector<int> nums, int n, vector<int> &ans){
        if(n<0) return 0;
        
        if(ans[n]!=-1) return ans[n];
        
        return ans[n] = max(nums[n] + robber(nums, n-2, ans), robber(nums, n-1, ans));
    }
    
        
};