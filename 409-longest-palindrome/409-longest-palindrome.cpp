class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char, int> hash;
        int n = s.length();
        
        int count = 0;
        
        for(char c: s){
            if(hash[c]){
                hash[c]--;
                count++;
            }
            else hash[c]++;
        }
        
        
        for(auto it : hash){
            if(it.second) return count*2 +1;
        }
        
        return count*2;
        
    }
};