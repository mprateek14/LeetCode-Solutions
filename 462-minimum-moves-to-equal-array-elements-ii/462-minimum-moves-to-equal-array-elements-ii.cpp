class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        int a = 0;
        int b = n-1;
        
        int mid = a + (b-a)/2;
        
        int count = 0;
        
        for(int i: nums){
            count += abs(i-nums[mid]);
        }
        
        return count;
        
    }
};