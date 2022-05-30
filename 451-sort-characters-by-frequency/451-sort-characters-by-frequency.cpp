class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> hash;
        
        for(char c: s) hash[c]++;
        
        priority_queue<pair<int, char>> q;
        
        for(auto it: hash){
            q.push({it.second, it.first});
        }
        
        string ans;
        
        while(!q.empty()){
            ans+=string(q.top().first, q.top().second);
            q.pop();
        }
        
        return ans;
        
    }
};