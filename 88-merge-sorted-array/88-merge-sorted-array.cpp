class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        
        
        int a = n-1;
        int b = m-1;
        int c = n+m-1;
        
        while(a>=0 and b>=0){
            if(nums1[a]>nums2[b]){
                nums1[c] = nums1[a];
                a--;
                c--;
            }
            else{
                nums1[c] = nums2[b];
                b--;
                c--;
            }
        }
        
        while(b>=0){
            nums1[c] = nums2[b];
            b--;
            c--;
        }
        
    }
};