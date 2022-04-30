class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        
        if(nums.size()<3) return ans;
        
        sort(nums.begin(), nums.end());
        
        
        int n = nums.size();
        
        for(int i=0; i<n-2; i++){
            if(i>0 and nums[i] == nums[i-1]) continue;
            int first = nums[i];
            
            int a = i+1;
            int b = n-1;
            
            while(a<b){
                
                int sum = first + nums[a] + nums[b];
                
                if(sum == 0){
                    cout<< first << " " << a << " " << b;
                    cout << endl;
                    ans.push_back({first, nums[a], nums[b]});
                    a++;
                    while(nums[a] == nums[a-1] and a<b) a++;
                }
                else if(sum<0) a++;
                else b--;
                
            }
                
        }
        
        return ans;
    }
};