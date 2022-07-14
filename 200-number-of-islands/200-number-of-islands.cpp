class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        vector<int> dir = {-1, 0, 1, 0, -1};
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j, n, m, dir);
                    ans++;
                }
            }
        }
        
        return ans;
    }
    
    void dfs(vector<vector<char>> &grid, int i, int j, int n, int m, vector<int> &dir){
        if(i<0 or i>=n or j<0 or j>=m or grid[i][j] == '0') return;
        
        grid[i][j] = '0';
        
        
        for(int k=0; k<4; k++){
            dfs(grid, i+dir[k], j+dir[k+1], n, m, dir);
        }
    }
        
    
};