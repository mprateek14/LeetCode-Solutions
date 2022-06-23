class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        
        
        while(start<end){
            int mid = start + (end-start)/2;
            int mid2 = mid+1;
            
            if(nums[mid2]>nums[mid]) start = mid2;
            else end = mid;
        }
        
        return start;
        
    }
};