class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        int sum = 0;
        
        for(int i: nums) sum+=i;
        
        int left = 0;
        
        for(int i=0; i<n; i++){
            sum-=nums[i];
            
            if(sum == left) return i;
            
            left+=nums[i];
        }
        
        return -1;
        
    }
};