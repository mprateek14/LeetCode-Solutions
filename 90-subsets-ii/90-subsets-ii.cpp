class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());
        
        subsets(nums, 0, temp, ans);
        
        return ans;
    }
    
    void subsets(vector<int> &arr, int idx, vector<int> &temp, vector<vector<int>> &ans){
        
        ans.push_back(temp);
        if(idx>=arr.size()) return;
        for(int i=idx; i<arr.size(); i++){
            if(i!=idx and arr[i] == arr[i-1]) continue;
            temp.push_back(arr[i]);
            subsets(arr, i+1, temp, ans);
            temp.pop_back();
        }
        
    }
    
};