class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> hash;
        
        int maxi = 0;
        
        int l = 0;
        int r = 0;
        int sum = 0;
        for(r =0; r<nums.size(); r++){
            while(hash.count(nums[r])){
                hash.erase(nums[l]);
                sum -= nums[l];
                l++;
            }
            
            hash.insert(nums[r]);
            sum += nums[r];
            maxi = max(maxi, sum);
            
        }
        
        return maxi;
    }
};