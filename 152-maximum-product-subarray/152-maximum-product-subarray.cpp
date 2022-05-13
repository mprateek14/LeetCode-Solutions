class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        
        int maxi = 1;
        int mini = 1;
        
        for(int i:nums){
            if(i<0) swap(mini, maxi);
            
            mini = min(mini*i, i);
            maxi = max(maxi*i, i);
            
            ans = max(ans, maxi);
        }
        
        return ans;
    }
};