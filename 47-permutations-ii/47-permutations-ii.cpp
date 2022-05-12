class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        
        permut(nums, 0, ans);
        
        return ans;
    }
    
    void permut(vector<int> arr, int idx, vector<vector<int>> &ans){
        if(idx == arr.size()){
            ans.push_back(arr);
        }
        
        for(int i=idx; i<arr.size(); i++){
            if(i!=idx && arr[i] == arr[idx]) continue;
            
            swap(arr[i], arr[idx]);
            permut(arr, idx+1, ans);
            // swap(arr[i], arr[idx]);
        }
    }
    
};