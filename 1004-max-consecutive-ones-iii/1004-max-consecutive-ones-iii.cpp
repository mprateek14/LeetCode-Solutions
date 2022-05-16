class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        
        int l = 0;
        int r = 0;
        
        int maxi = 0;
        unordered_map<int, int> hash;
        
        for(r=0; r<n; r++){
            hash[nums[r]]++;
            while(hash[0]>k and l<=r){
                hash[nums[l]]--;
                l++;
            }
            maxi = max(maxi, r-l+1);
        }
     return maxi;   
    }
};