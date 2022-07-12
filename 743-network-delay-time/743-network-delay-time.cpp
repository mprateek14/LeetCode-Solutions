class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<vector<pair<int, int>>> adj(n+1);
        
        for(auto arr: times){
            adj[arr[0]].push_back({arr[1], arr[2]});
        }
        
        
        vector<int> ans(n+1, INT_MAX);
        ans[k] = 0;
        ans[0] = 0;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        
        q.push({0, k});
        
        while(!q.empty()){
            pair<int, int> temp = q.top();
            q.pop();
            int nodeDis = temp.first;
            for(auto it: adj[temp.second]){
                int sum = nodeDis + it.second;
                if(sum < ans[it.first]){
                    ans[it.first] = sum;
                    q.push({sum, it.first});
                }
            }
        }
        
        // for(int i: ans) cout << i << " ";
        
        int time = *max_element(ans.begin(), ans.end());
        if(time == INT_MAX) return -1;
        
        return time;
        
    }
};







// times[0] = src;
// times[1] = dest;
// times[2] = weight;