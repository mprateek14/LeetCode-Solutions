class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n = s1.length();
        int m = s2.length();
        
        if(n>m) return false;
        
        vector<int> cur(26,0);
        vector<int> goal(26,0);
        
        for(char c: s1){
            cur[c-'a']++;
        }
        
        for(int i=0; i<m; i++){
            if(i>=n) goal[s2[i-n] - 'a']--;
            goal[s2[i]-'a']++;
            
            if(cur == goal) return true;
        }
        
        return false;
    }
};