class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
        int maxi = 0;
        int i = 0;
        
        for(i=0; i<n; i++){
            int sum = i+nums[i];
            if(i>maxi) return false;
            maxi = max(sum, maxi);
            
        }
        
        return true;
    }
};