class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        unordered_map <string, vector<string>> hash;
        
        for(string s: strs){
            string temp = s;
            temp = countSort(temp);
            hash[temp].push_back(s);
        }
        
        for(auto s: hash) ans.push_back(s.second);
        
        return ans;
        
    }
    
    string countSort(string s){
        vector<int> hash(26, 0);
        
        for(char c: s) hash[c - 'a']++;
        
        string ans;
        
        for(int i=0; i<26; i++){
            while(hash[i]){
              ans+= i+'a';
                hash[i]--;
            }
        }
        
        return ans;
    }
    
};