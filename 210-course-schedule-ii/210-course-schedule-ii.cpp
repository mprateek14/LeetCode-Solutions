class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prereq) {
        
        vector<vector<int>> adj(n);
        vector<int> inDegree(n, 0);
        
        for(auto &it: prereq){
            adj[it[1]].push_back(it[0]);
            inDegree[it[0]]++;
        }
        
        queue<int> q;
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            if(inDegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            n--;
            ans.push_back(node);
            
            for(auto it: adj[node]){
                inDegree[it]--;
                if(inDegree[it] == 0) q.push(it);
            }
        }
        
        if(n == 0) return ans;
        
        vector<int> temp;
        return temp;
        
    }
};