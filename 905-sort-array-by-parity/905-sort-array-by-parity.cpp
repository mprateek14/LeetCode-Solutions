class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1) return nums;
        
        int start = 0;
        int end = n-1;
        
        while(start<end){
            if(nums[start]%2 == 0) start++;
            
            else if(nums[end]%2) end--;
            
            else{
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
        }
        
        return nums;
    }
};