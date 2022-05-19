class Solution {
public:
    vector<string> generateParenthesis(int n) {
     
        vector<string> ans;
        
        backtrack(ans, "", n, 0, 0);
        
        return ans;
        
    }
    
    void backtrack(vector<string>&ans, string temp, int max, int open, int close){
        if(open + close == 2*max){
            ans.push_back(temp);
            return;
        }
        
        if(open<max) backtrack(ans, temp+"(", max, open+1, close);
        if(close<open) backtrack(ans, temp+")", max, open, close+1);
        
    }
};