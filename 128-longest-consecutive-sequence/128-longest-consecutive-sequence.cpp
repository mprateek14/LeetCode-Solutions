class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Brute force by sorting and checking max continuity
        //optimise by hashing the values in set. Now check for each if a value-1 exists.
        // if it does that means it is a part of bigger sequence. else start counting from there.
        
        
        
        unordered_set<int> seq(nums.begin(), nums.end());
        int maxi = 0;
        
        for(int i: nums){
            if(seq.count(i-1)) continue;
            else{
                int j = i+1;
                int sum = 1;    //i already exists
                while(seq.count(j)){
                    sum++;
                    j++;
                }
                
                maxi = max(sum, maxi);
            }
        }
        
        return maxi;
    }
};