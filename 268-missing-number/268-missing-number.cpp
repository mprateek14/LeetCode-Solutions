class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        
        for(int i: nums){
            sum += i;
        }
        
        int sz = nums.size();
        
        int sums = (sz*(sz+1))/2;
        
        if(sums-sum >0) return sums-sum;
        else return 0;
    }
};