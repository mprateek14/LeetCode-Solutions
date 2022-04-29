class Solution {
public:
    int search(vector<int>& arr, int target) {
     
//         int start = 0;
//         int end = arr.size() -1;
//         int mid = start + (end-start)/2;
        
//         while(start<=end){
//             if(arr[mid] == target) return mid;
//             else if(arr[mid] < target){
//                 start = mid+1;
//             }
//             else end = mid-1;
//         }
        
//         return -1;
        
        
        
        int ans = binaryS(arr, 0 , arr.size()-1, target);
        return ans;
    }
    
    
    int binaryS(vector<int> &arr, int start, int end, int target){
        if(start>end) return -1;
        int mid = start + (end-start)/2;
        
        if(arr[mid] == target) return mid;
        
        else if(arr[mid] < target) return binaryS(arr, mid+1, end, target);
        else return binaryS(arr, start, mid-1, target);
        
    }
    
};