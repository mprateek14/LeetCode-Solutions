class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> dir = {-1,0,1,0,-1}; 
        
        queue <pair<int, int>> q;
        int fresh = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 2) q.push({i,j});
                if(grid[i][j] == 1) fresh++;
            }
        }
               
        int count = -1;
        
        while(!q.empty()){
            int size = q.size();
            while(size){
                pair<int, int> temp = q.front();
                q.pop();
                for(int i=0; i<4; i++){
                    int x = temp.first + dir[i];
                    int y = temp.second + dir[i+1];
                    if(x>=0 and x<n and y>=0 and y<m and grid[x][y] == 1){
                        grid[x][y] = 2;
                        q.push({x,y});
                        fresh--;
                    }
                }
                size--;
            }
            count++;
        }
        
        
        if(fresh > 0) return -1;
        if(count == -1) return 0;
        return count;
    }
};