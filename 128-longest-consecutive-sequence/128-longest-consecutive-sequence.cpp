class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> hash(nums.begin(), nums.end());
        
        int maxi = 0;
        
        for(int i: nums){
            if(hash.find(i-1) != hash.end()) continue;
            else{
                int j = i+1;
                int sum = 1;
                while(hash.count(j)){
                    sum++;
                    j++;
                }
                maxi = max(sum, maxi);
            }
        }
        
        return maxi;
        
    }
};