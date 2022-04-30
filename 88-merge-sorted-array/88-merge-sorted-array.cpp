class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        
        if(!nums2.size()) return;
        
        int i = 0;
        int j;
        for(i=0; i<n; i++){
            if(nums1[i]>nums2[0]){
                swap(nums1[i], nums2[0]);
                
                int temp = nums2[0];
                
                for(j=1; j<m and nums2[j]<temp; j++){
                    
                        nums2[j-1] = nums2[j];
                    
                }
                nums2[j-1] = temp;
            }
            
            for(int k=0; k<n; k++) cout << nums1[k] << " ";
            cout << endl;
                    for(int j=0; j<m; j++) cout << nums2[j] << " ";
        cout << endl;
        }
        j = 0;
        while(i<n+m){
            nums1[i] = nums2[j];
            i++;
            j++;
            
            // for(int k=0; k<n+m; k++) cout << nums1[k] << " ";
            // cout << endl;
        }
        
    }
};