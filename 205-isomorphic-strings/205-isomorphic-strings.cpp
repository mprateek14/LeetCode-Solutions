class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> mapS(128, 0);
        vector<int> mapT(128, 0);
        
        int n = s.length();
        
        for(int i=0; i<n; i++){
            
            if(mapS[s[i]]!=mapT[t[i]]) return false;
            
            mapS[s[i]] = i+1;
            mapT[t[i]] = i+1;
        }
        
        return true;
        
    }
};