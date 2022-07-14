class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int n = nums.size();
        
        int neg = 0;
        
        int ans = 0;
        
        for(int i: nums){
            neg += i;
            
            if(neg<0){
                ans = min(ans, neg);
            }
        }
        
        if(ans>0) return 1;
        
        return abs(ans)+1;
        
    }
};