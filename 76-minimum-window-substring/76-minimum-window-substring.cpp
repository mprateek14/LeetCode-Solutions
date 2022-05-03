class Solution {
public:
    string minWindow(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        
        if(m>n) return "";
        
        int l = 0;
        int r = 0;
        int counter = m;
        int minLen = INT_MAX;
        int minStart = 0;
        
        vector<int> goal(128, 0);
        for(char c: t) goal[c - 'A']++;
        
        
        for(r=0; r<n; r++){
            if(goal[s[r] - 'A'] > 0) counter--;
            goal[s[r] - 'A']--;
            
            while(counter == 0){
                if(r-l+1 < minLen){
                    minStart = l;
                    minLen = r-l+1;   
                }
                goal[s[l] - 'A']++;
                if(goal[s[l] - 'A'] > 0) counter++;
                l++;    
            }
            
        }
        
        if(minLen!=INT_MAX) return s.substr(minStart, minLen);
        return "";
        
        
    }
    
};