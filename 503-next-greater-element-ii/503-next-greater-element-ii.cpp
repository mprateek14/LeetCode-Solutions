class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n, -1);
        
        stack<int> s;
        
        for(int i=0; i<2*n; i++){
            int temp = nums[i%n];
            while(!s.empty() and nums[s.top()]<temp){
                ans[s.top()] = temp;
                s.pop();
            }
            if(i<n) s.push(i);
        }
        
        
        return ans;
        
    }
};