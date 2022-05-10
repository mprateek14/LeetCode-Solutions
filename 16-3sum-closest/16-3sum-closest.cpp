class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = INT_MAX;
        int diff = INT_MAX;
        for(int i=0; i<n; i++){
            int first = nums[i];
            
            int a = i+1;
            int b = n-1;
            
            while(a<b){
                int sum = first + nums[a] + nums[b];
                if(abs(sum-target) < diff){
                    diff = abs(sum-target);
                    ans = sum;
                }
                if(sum<target)a++;
                else b--;
            }
        }
        
        return ans;
        
    }
};