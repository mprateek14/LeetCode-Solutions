class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        int size = nums.size()-1;
        
        subset(nums, temp, 0, size, ans);
        
        return ans;
    }
    
    void subset(vector<int> &arr, vector<int> temp, int start, int size, vector<vector<int>> &ans){
        if(start>size){
            ans.push_back(temp);
            return;
        }
                subset(arr, temp, start+1, size, ans);

        temp.push_back(arr[start]);
        subset(arr, temp, start+1, size, ans);
        
        // temp.pop_back();
           
    }
};