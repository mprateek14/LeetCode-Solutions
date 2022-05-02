class Solution {
public:
    vector<string> maps =  {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    vector<string> letterCombinations(string digits) {        
        vector<string> ans;
        
        if(!digits.size()) return ans;
        
        // string combos;
        helper(digits, 0, "", ans);
        
        return ans;
        
    }
    
    void helper(string digits, int idx, string combos, vector<string> &ans){
        if(idx == digits.size()) ans.push_back(combos);
        else{
            for(auto c: maps[digits[idx] - '0']){
                combos.push_back(c);
                helper(digits, idx+1, combos, ans);
                combos.pop_back();
            }
        }
    }
    
};