class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        vector<vector<int>> visited(n,vector<int>(m,0));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1' and !visited[i][j]){
                    bfs(grid, i, j, n, m, visited);
                    visited[i][j] = 1;
                    ans++;
                }
            }
        }
        
        return ans;
    }
    
    
    void bfs(vector<vector<char>> &grid, int row, int col, int n, int m, vector<vector<int>> &visited){
        
        vector<int> dir = {-1,0,1,0,-1};
        
        queue<pair<int, int>> q;
        q.push({row,col});
        
        while(!q.empty()){
            int topR = q.front().first;
            int topC = q.front().second;
            q.pop();
            
            for(int i=0; i<4; i++){
                int r = topR + dir[i];
                int c = topC + dir[i+1];
                
                if(r>=0 and r<n and c>=0 and c<m and grid[r][c] == '1' and !visited[r][c]){
                    q.push({r, c});
                    visited[r][c] = 1;
                }
            }
            
        }
        
    }
    
};