class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int maxi = 0;
        int maxi2 = 0;
        
        for(int i: nums){
            if(i>maxi){
                maxi2 = maxi;
                maxi = i;
            }
            
            else if(i<=maxi and i>maxi2) maxi2 = i;
        }
        
        return (maxi-1)*(maxi2-1);
        
    }
};