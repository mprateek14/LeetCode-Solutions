class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        vector<int> color(n, -1);
        
        for(int i=0; i<n; i++){
            if(color[i] == -1){
                if(checkBipartite(graph, i, color) == false) return false;
            }
        }
        
        return true;
    }
    
    
    bool checkBipartite(vector<vector<int>> graph, int node, vector<int> &color){
        
        queue<int> q;
        q.push(node);
        color[node] = 1;
        
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto it: graph[temp]){
                if(color[it] == -1){
                    color[it] = !color[temp];
                    q.push(it);
                }
                else if(color[it] == color[temp]) return false;
            }
        }
        
        return true;
    }
    
    
};