
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> hash;
        
        for(int i:nums) hash[i]++;
        
        
        vector<vector<int>> bucket(nums.size()+1);
        
        for(auto it: hash){
            bucket[it.second].push_back(it.first);
        }
        
        vector<int> ans;
        
        for(int i=bucket.size()-1; i>=0; i--){
            for(int j: bucket[i]){
                if(ans.size() == k) break;
                ans.push_back(j);
            }
        }
        
        return ans;
    }
        
};