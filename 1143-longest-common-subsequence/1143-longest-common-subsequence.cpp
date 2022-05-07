class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        
        vector<vector<int>> mem(n+1, vector<int>(m+1, -1));
        
        return memo(text1, n, text2, m, mem);
        
    }
    
    int memo(string &s1, int n, string &s2, int m, vector<vector<int>> &mem){
        if(n==0 or m==0) return 0;
        
        if(mem[n][m] != -1) return mem[n][m];
        
        if(s1[n-1] == s2[m-1]) return mem[n][m] =  1 + memo(s1, n-1, s2, m-1, mem);
        else{
            return mem[n][m] = max(memo(s1, n-1, s2, m, mem), memo(s1, n, s2, m-1, mem));
        }
        
    }
    
    
};