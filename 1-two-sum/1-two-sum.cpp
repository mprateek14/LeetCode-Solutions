class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        
        for(auto it = nums.begin(); it!=nums.end(); it++){
            auto it2 = find(it+1, nums.end(), target - *it);
                if(it2 != nums.end()){
                    result.push_back(it-nums.begin());
                    result.push_back(it2-nums.begin());
                }
            
        }
        return result;
            
        }
        
    
};