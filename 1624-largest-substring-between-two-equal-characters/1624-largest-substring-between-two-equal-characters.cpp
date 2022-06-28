class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        int n = s.length();
        
        vector<int> hash1(26, -1);
        vector<int> hash2(26, -1);
        
        for(int i=0; i<n; i++){
            if(hash1[s[i] - 'a'] == -1) hash1[s[i] - 'a'] = i;
            else hash2[s[i] - 'a'] = i;
        }
        
        
        int ans = -1;
        
        for(int i=0; i<26; i++){
            if(hash1[i] != -1 and hash2[i] != -1){
                ans = max(ans, hash2[i]-hash1[i]-1);
            }
        }
        
        
        return ans;
        
    }
};