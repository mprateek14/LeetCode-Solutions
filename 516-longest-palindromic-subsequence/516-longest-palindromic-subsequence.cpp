class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(t.begin(), t.end());
        
        int n = s.length();
        
        int dp[n+1][n+1];
        
        for(int i=0; i<n+1; i++) dp[i][0] = 0;
        for(int j=0; j<n+1; j++) dp[0][j] = 0;
        
        for(int i=1; i<n+1; i++){
            for(int j=1; j<n+1; j++){
                if(s[i-1] == t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        // CODE FOR PRINTING LCS
        
//         int len = dp[n][n];
//         int idx = len-1;
        
//         string ans = "";
//         for(int i=0; i<len; i++) ans+="$";
        
//         int i=n;
//         int j=n;
        
//         while(i>0 and j>0){
//             if(s[i-1] == t[j-1]){
//                 ans[idx] = s[i-1];
//                 idx--;
//                 i--;
//                 j--;
//             }
            
//             else if(dp[i-1][j] > dp[i][j-1]){
//                 i--;
//             }
//             else j--;
//         }
        
//         cout << ans;
        
        return dp[n][n];
    }
};