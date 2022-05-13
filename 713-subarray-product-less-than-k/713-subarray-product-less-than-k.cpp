class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(k<=0) return 0;
        
        int l = 0;
        int r = 0;
        int count = 0;
        int product = 1;
        for(r=0; r<n; r++){
            product*=nums[r];
            
            while(product>=k and l<=r){
                product/=nums[l];
                l++;
            }
            count += r-l+1;
        }
        
        return count;
        
        
    }
};