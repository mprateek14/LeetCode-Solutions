//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> dir = {-1, 0, 1, 0, -1};
        vector<vector<int>> vis(n,  vector<int>(m, 0));
        set <vector<pair<int, int>>> st;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j] == 0 and grid[i][j] == 1){
                    vector<pair<int, int>> vec;
                    dfs(grid, i, j, n, m, vis, dir, vec, i, j);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
    
    void dfs(auto &grid, int i, int j, int n, int m, auto &vis, auto &dir, auto &vec, int baseRow, int baseCol){
        vis[i][j] = 1;
        vec.push_back({i-baseRow, j-baseCol});
        
        for(int k=0; k<4; k++){
            int a = i+dir[k];
            int b = j+dir[k+1];
            
            if(a>=0 and a<n and b>=0 and b<m and vis[a][b] == 0 and grid[a][b] == 1){
                dfs(grid, a, b, n, m, vis, dir, vec, baseRow, baseCol);
            }
        }
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends