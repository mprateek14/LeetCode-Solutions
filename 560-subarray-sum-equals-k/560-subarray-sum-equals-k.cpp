class Solution {
public:
    int subarraySum(vector<int>& nums, int sum) {
        
        int n = nums.size();
        
        int count = 0;
        
        unordered_map<int, int> hash;
        int curSum = 0;
        hash[curSum]++;
        for(int i=0; i<n; i++){
            curSum += nums[i];
            
            if(hash.count(curSum - sum)) count+=hash[curSum-sum];
            
            hash[curSum]++;
        }
        
        return count;
    }
};