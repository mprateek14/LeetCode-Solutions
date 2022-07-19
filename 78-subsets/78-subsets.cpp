class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        
        subset(nums, 0, temp, ans);
        
        return ans;
    }
    
    void subset(vector<int> &arr, int idx, vector<int> temp, vector<vector<int>> &ans){
        
        if(idx>=arr.size()){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(arr[idx]);
        subset(arr, idx+1, temp, ans);
        
        temp.pop_back();
        subset(arr, idx+1, temp, ans);
           
    }
    
    
};