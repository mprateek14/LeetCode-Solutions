class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        
        int n = nums.size();
        
        int l = 0;
        int r = 0;
        int sum = 0;
        
        for(r = 0; r<n; r++){
            sum+= nums[r];
                while(sum>=target){
                    // cout << sum << " " << l << " ";
                    int len = r-l+1;
                    ans = min(ans, len);
                    sum-=nums[l];
                    l++;
                }

            
        }
        
        if(ans!=INT_MAX) return ans;
        return 0;
    }
};