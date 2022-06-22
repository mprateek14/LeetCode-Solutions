class Solution {
public:
    string reverseOnlyLetters(string s) {
        
        int n = s.length()-1;
        
        int a = 0;
        
        while(a<n){
            while(a<n and !isalpha(s[a]))a++;
            while(a<n and !isalpha(s[n]))n--;
            
            swap(s[a], s[n]);
            a++;
            n--;
        }
        
        return s;
        
    }
};