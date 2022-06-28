class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        long double dp[n+1][m+1];
        
        for(int i=0; i<m+1; i++) dp[0][i] = 0;
        for(int j=0; j<n+1; j++) dp[j][0] = 1;
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][m];
        
    }
};