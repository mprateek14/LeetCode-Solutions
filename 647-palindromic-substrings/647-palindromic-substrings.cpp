class Solution {
public:
    int countSubstrings(string s) {
        if(!s.length()) return 0;
        
        int count = 0;
        
        for(int i=0; i<s.length(); i++){
            count += palindrome(s, i, i, 0) + palindrome(s, i, i+1, 0);
        }
        
        return count;
        
    }
    
    
    int palindrome(string s, int left, int right, int count){
        while(left>=0 and right<s.length() and s[left] == s[right]){
            count++;
            left--;
            right++;
        }
        return count;
    }
    
    
};