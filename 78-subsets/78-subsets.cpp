class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        
        subset(nums, 0, temp, ans);
        
        return ans;
    }
    
    void subset(vector<int> &arr, int idx, vector<int> temp, vector<vector<int>> &ans){
        
        ans.push_back(temp);
        
        for(int i=idx; i<arr.size(); i++){
            temp.push_back(arr[i]);
            subset(arr, i+1, temp, ans);
            temp.pop_back();
        }
           
    }
    
    
};