class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        
        int n = arr.size();
        int ans;
        for(int i=0; i<n; i++){
            
            if(arr[abs(arr[i])]<0){
                ans = abs(arr[i]);
                break;
            }
            
            arr[abs(arr[i])] = -arr[abs(arr[i])];
            
        }
        
        return ans;
        
    }
};