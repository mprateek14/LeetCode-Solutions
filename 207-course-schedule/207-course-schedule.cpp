class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prereq) {
        
        vector<vector<int>> adj(n);
        vector<int> inDegree(n, 0);
        
        for(auto &it: prereq){
            adj[it[1]].push_back(it[0]);
            inDegree[it[0]]++;
        }
        
        queue<int> q;
        
        for(int i=0; i<n; i++){
            if(inDegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            n--;
            
            for(auto &it: adj[node]){
                inDegree[it]--;
                if(inDegree[it] == 0) q.push(it);
            }
        }
        
        return n==0;
        
    }
};