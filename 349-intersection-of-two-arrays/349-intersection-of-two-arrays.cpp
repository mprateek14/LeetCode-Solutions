class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        
        if(m>n) swap(nums1, nums2);
        
        unordered_map<int, int> hash;
        
        for(int i: nums2) hash[i]++;
        
        vector<int> ans;
        
        for(int i: nums1){
            if(hash[i]){
                ans.push_back(i);
                hash[i] = 0;
            }
        }
        
        return ans;
        
    }
};