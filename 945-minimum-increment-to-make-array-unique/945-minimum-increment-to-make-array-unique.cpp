class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        int cur = nums[0];
        
        int ans = 0;
        
        for(int i=1; i<n; i++){
            
            int expected = cur + 1;
            
            if(expected>nums[i]){
                int temp = expected-nums[i];
                ans+= temp;
            }
            
            cur = max(expected, nums[i]);
            
        }
        
        return ans;
        
    }
};