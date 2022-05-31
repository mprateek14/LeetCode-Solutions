class Solution {
public:
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> hash;
        
        for(string s: words)hash[s]++;
        
        
        priority_queue<pair<int,string>> q;
        
        for(auto it: hash){
            q.push({-it.second, it.first});
            if(q.size()>k) q.pop();
        }
        
        vector<string> ans;
        
        while(!q.empty()){
            ans.insert(ans.begin(), q.top().second);
            q.pop();
        }
        
        return ans;
        
    }
};