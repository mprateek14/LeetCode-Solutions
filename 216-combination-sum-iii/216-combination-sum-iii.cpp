class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        int arr[] = {1,2,3,4,5,6,7,8,9};
        
        vector<int> temp;
        vector<vector<int>> ans;
        int size = sizeof(arr) / sizeof(arr[0]);
        
        combos(arr, size, 0, n, k, 0, temp, ans);
        
        return ans;
    }
    
    void combos(int arr[], int size, int i, int sum, int k, int count, vector<int>&temp, vector<vector<int>>&ans){
        
        if(count == k && sum == 0){
            ans.push_back(temp);
            return;
        }
        if(i>=size || count>k) return;
        
        
        if(arr[i]<=sum){
            temp.push_back(arr[i]);
            combos(arr, size, i+1, sum-arr[i], k, count+1, temp, ans);
            temp.pop_back();
        }
        
        combos(arr, size, i+1, sum, k, count, temp, ans);
        
    }
    
    
};