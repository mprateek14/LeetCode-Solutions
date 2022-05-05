class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack <int> st;
        
        int n = nums2.size();
        
        vector <int> bigger(n, -1);
        
        unordered_map<int, int> hash;
        
        for(int i=0; i<n; i++){
            hash[nums2[i]] = -1;
            while(!st.empty() and nums2[i] > st.top()){
                // bigger[st.top().second] = nums2[i];
                hash[st.top()] = nums2[i];
                st.pop();
            }
            
            st.push(nums2[i]);
            
        }
        
        
        vector<int> ans;
        
        for(int i: nums1){
            ans.push_back(hash[i]);
        }
        
       
                  
return ans;
        
        
        
    }
};