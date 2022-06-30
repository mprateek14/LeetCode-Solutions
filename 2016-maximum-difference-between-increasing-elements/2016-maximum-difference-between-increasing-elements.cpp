class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int maxi = -1;
        
        int currMin = nums[0];
        
        int n = nums.size();
        
        for(int i=1; i<n; i++){
            if(nums[i]<=currMin){
                currMin = nums[i];
            }
            else{
                maxi = max(maxi, nums[i]-currMin);
            }
        }
        
        
        return maxi;
        
    }
};