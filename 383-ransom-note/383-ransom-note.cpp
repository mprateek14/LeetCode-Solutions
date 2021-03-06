class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> hash(26,0);
        
        for(char c: magazine){
            hash[c - 'a']++;
        }
        
        
        for(char c: ransomNote){
            if(!hash[c - 'a']) return false;
            else hash[c - 'a']--;
        }
        
        return true;
        
    }
};