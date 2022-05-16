class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        
        int maxi = 0;
        
        int count = 0;
        
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            if(nums[low] == 1){
                count++;
                maxi = max(maxi, count);
            }
            else count = 0;
            low++;
        }
        return maxi;
    }
};