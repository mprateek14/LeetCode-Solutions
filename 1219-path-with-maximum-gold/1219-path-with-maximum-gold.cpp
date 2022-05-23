class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int maxi = INT_MIN;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                maxi = max(maxi, backtrack(grid, i, j));
            }
        }
        
        return maxi;
        
    }
    
    int backtrack(vector<vector<int>> &grid, int i, int j){
        if(i<0 or i>=grid.size() or j<0 or j>=grid[i].size() or grid[i][j] <= 0) return 0;
        grid[i][j] = -grid[i][j];
        
        int ans = max({backtrack(grid, i+1,j), backtrack(grid, i, j+1), backtrack(grid, i-1, j), backtrack(grid,i, j-1)});
        
        grid[i][j] = -grid[i][j];
        
        return grid[i][j]+ans;
        
    }
    
};