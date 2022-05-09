class Solution {
public:
    int jump(vector<int>& nums) {
     
        int curEnd = 0;
        int curMax = 0;
        int jumps = 0;
        
        int n = nums.size();
        
        for(int i=0; i<n-1; i++){
            curMax = max(i+nums[i], curMax);
            
            if(i == curEnd){
                jumps++;
                curEnd = curMax;
            }
        }
        
        
        return jumps;
        
    }
};