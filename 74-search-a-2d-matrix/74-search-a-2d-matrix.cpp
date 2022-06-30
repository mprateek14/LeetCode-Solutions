class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i = 0;
        int j = m-1;
        
        while(i<n and j>=0){
            if(matrix[i][j] == target) return true;
            if(target < matrix[i][j]){
                if(target<matrix[i][0]) return false;
                return binaryS(matrix[i], 0, m-1, target);
            }
            else if(target>matrix[i][j]) i++;
            
        }
        
        
        return false;
        
    }
    
    bool binaryS(vector<int>&arr, int start, int end, int target){
     
        if(start>end) return false;
        
        int mid = start + (end-start)/2;
        
        if(arr[mid] == target) return true;
        
        else if(arr[mid] < target){
         
            return binaryS(arr, mid+1, end, target);
        } 
        
        else{
            
            return binaryS(arr, start, mid-1, target);
        } 
        
    }
};