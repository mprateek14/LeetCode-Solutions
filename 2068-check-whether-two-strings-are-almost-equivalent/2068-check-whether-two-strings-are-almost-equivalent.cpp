class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        
        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);
        
        
        for(char i: word1) hash1[i - 'a']++;
        
        for(char c: word2) hash2[c - 'a']++;
        
        
        for(int i=0; i<26; i++){
            if(abs(hash1[i] - hash2[i]) > 3) return false;
        }
        
        
        return true;
        
    }
};