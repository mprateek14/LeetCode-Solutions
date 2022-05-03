class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.length();
        int m = s.length();
        
        vector<int> ans;
        
        if(n>m) return ans;
        
        vector<int> goal(26,0);
        vector<int> cur(26,0);
        
        for(char c: p) goal[c-'a']++;
        
        
        for(int i=0; i<m; i++){
            cur[s[i] - 'a']++;
            if(i>=n) cur[s[i-n] - 'a']--;
            if(cur == goal){
                ans.push_back(i-n+1);
            }
        }
        
        return ans;
    }
};