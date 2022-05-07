class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        
        // vector<vector<int>> mem(n+1, vector<int>(m+1, -1));
        // return memo(text1, n, text2, m, mem);
        
        return lcsdp(text1, n, text2, m);
        
    }
    
    int memo(string &s1, int n, string &s2, int m, vector<vector<int>> &mem){
        if(n==0 or m==0) return 0;
        
        if(mem[n][m] != -1) return mem[n][m];
        
        if(s1[n-1] == s2[m-1]) return mem[n][m] =  1 + memo(s1, n-1, s2, m-1, mem);
        else{
            return mem[n][m] = max(memo(s1, n-1, s2, m, mem), memo(s1, n, s2, m-1, mem));
        }
        
    }
    
    int lcsdp(string s1, int n, string s2, int m){
        
        int dp[n+1][m+1];
        
        for(int i=0; i<n+1; i++){
            for(int j=0; j<m+1; j++){
                if(i==0 or j==0) dp[i][j] = 0;
            }
        }
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(s1[i-1] == s2[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[n][m];
        
    }
    
    
};