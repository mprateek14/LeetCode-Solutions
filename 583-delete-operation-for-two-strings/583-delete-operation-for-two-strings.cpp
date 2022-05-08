class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int n = word1.length();
        int m = word2.length();
        
        
//         int dp[n+1][m+1];
        
//         for(int i=0; i<n+1; i++) dp[i][0] = 0;
//         for(int i=0; i<m+1; i++) dp[0][i] = 0;
        
        
//         for(int i=1; i<n+1; i++){
//             for(int j=1; j<m+1; j++){
//                 if(word1[i-1] == word2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
//                 else dp[i][j] == max(dp[i-1][j], dp[i][j-1]);
//             }
//         }
        
        
//         int len = dp[n][m];
        
//         return n+m-(2*len);
        
        
        vector<vector<int>> t(n, vector<int>(m, -1));
        int ans =  memo(word1, n-1, word2, m-1, t);
        return n+m-(2*ans);
        
        
    }
    
    
        int memo(string &s1, int n, string &s2, int m, vector<vector<int>> &mem){
        if(n<0 or m<0) return 0;
        
        if(mem[n][m] != -1) return mem[n][m];
        
        if(s1[n] == s2[m]) return mem[n][m] =  1 + memo(s1, n-1, s2, m-1, mem);
        else{
            return mem[n][m] = max(memo(s1, n-1, s2, m, mem), memo(s1, n, s2, m-1, mem));
        }
        
    }
    
};