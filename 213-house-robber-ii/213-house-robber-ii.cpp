class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1) return nums[0];
        
        vector<int>nums1(nums.begin(), nums.end()-1);
        vector<int> nums2(nums.begin()+1, nums.end());
        
        return max(robber(nums1), robber(nums2));
        
    }
    
    int robber(vector<int> nums){
        int rob1 = 0;
        int rob2 = 0;
        
        for(int i: nums){
            int temp = max(i+rob1, rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        
        return rob2;
        
    }
    
};