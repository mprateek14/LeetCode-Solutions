class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> dir = {-1,0,1,0,-1};
            
        vector<vector<int>> vis(n, vector<int>(m,0));
        
        int ans = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1 and !vis[i][j]){
                    vis[i][j] = 1;
                    bfs(grid, i, j, n, m, vis, dir, ans);
                    
                }
            }
        }
        
        return ans;
        
    }
    
    void bfs(vector<vector<int>> &grid, int i, int j, int n, int m, vector<vector<int>> &vis, vector<int> &dir, int &ans){
        
        queue<pair<int, int>> q;
        int sum = 1;
        
        q.push({i, j});
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int k=0; k<4; k++){
                int r = row + dir[k];
                int c = col + dir[k+1];
                
                if(r>=0 and r<n and c>=0 and c<m and grid[r][c] == 1 and !vis[r][c]){
                    q.push({r,c});
                    sum++;
                    vis[r][c] = 1;
                }
            }
            
        }
            ans = max(ans, sum);
    }
    
    
};