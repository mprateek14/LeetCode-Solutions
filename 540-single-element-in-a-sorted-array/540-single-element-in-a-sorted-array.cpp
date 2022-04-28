class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int end = arr.size()-1;
        int start = 0;
        
        while(start<end){
            int mid = start + (end-start)/2;
            if(mid%2 == 0 && arr[mid]==arr[mid+1]){
                start = mid+2;
            }
            else if( mid%2==1 && arr[mid] == arr[mid-1]) start = mid+1;
            else end = mid;
        }
        
        return arr[start];
    }
    
};