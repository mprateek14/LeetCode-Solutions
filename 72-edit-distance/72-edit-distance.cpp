class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        
        
        int dp[n+1][m+1];
        
        
        
        for(int i=0; i<n+1; i++) dp[i][0] = i;
        for(int i=0; i<m+1; i++) dp[0][i] = i;
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(word1[i-1] == word2[j-1]) dp[i][j] = dp[i-1][j-1];
                else{
                    dp[i][j] = 1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
                }
            }
            
        }
        
        return dp[n][m];
        
        
        
        
//         vector<vector<int>> t(n, vector<int>(m, -1));
        
//         return memoize(word1, n-1, word2, m-1, t);
        
        
        
    }
    
    
//     int memoize(string &s1, int n, string &s2, int m, vector<vector<int>> &t){
//         if(n<0) return m+1;
//         if(m<0) return n+1;
        
//         if(t[n][m] != -1) return t[n][m];
        
//         if(s1[n] == s2[m]) return t[n][m] = memoize(s1, n-1, s2, m-1, t);
//         return t[n][m] = 1 + min(memoize(s1, n-1, s2, m, t), min(memoize(s1, n, s2, m-1, t), memoize(s1, n-1, s2, m-1, t)));
        
        
//     }
    
    
};