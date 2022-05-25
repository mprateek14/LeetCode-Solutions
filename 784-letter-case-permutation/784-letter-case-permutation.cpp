class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        
        permut(s, 0, "", ans);
        
        return ans;
    }
    
    void permut(string s, int n, string temp, vector<string> &ans){
        if(n==s.length()){
            ans.push_back(temp);
            return;
        }
        
        if(!isalpha(s[n])){
            // temp+=s[n];
            permut(s, n+1, temp+=s[n], ans);
        }
        else{
            temp+=toupper(s[n]);
            permut(s, n+1, temp, ans);
            temp.pop_back();
            temp+=tolower(s[n]);
            permut(s, n+1, temp, ans);
        }
        
    }
    
};