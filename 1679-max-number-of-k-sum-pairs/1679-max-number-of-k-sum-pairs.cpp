class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(n<2) return 0;
        
        vector<int> used(n, 0);
        
        sort(nums.begin(), nums.end());
        
        int left = 0;
        int right = n-1;
        
        int count = 0;
        
        while(left<right){
            
            int sum = nums[left] + nums[right];
            
            if(sum < k) left++;
            else if(sum > k) right--;
            else if(sum == k){
                count++;
                left++;
                right--;
            }
            
        }
        
        return count;
    }
};