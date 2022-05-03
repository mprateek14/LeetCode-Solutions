class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        
        int l = 0;
        int r = 0;
        
        vector<int> hash(26, 0);
        
        int ans = 0;
        int curMax = 0;
        for(r = 0; r<n; r++){
            hash[s[r] - 'A']++;
            curMax = *max_element(hash.begin(), hash.end());
            
            while(r-l+1 - curMax > k){
                hash[s[l] - 'A']--;
                l++;
            }
            
            
            ans = max(r-l+1, ans);
            
            
        }
        
        return ans;
    }
};