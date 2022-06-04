class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        
        vector<string> board(n);
        
        string s(n, '.');
        
        for(int i=0; i<n; i++){
            board[i] = s;
        }
        
        solve(board, n, 0, ans);
        return ans;
    }
    
    void solve(vector<string> &board, int n, int col, vector<vector<string>> &ans){
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(isSafe(row,col, board, n)){
                board[row][col] = 'Q';
                solve(board, n, col+1, ans);
                board[row][col] = '.';
            }
        }
    }
    
    bool isSafe(int row, int col, vector<string> &board, int n){
        int rw = row;
        int cl = col;
        
        while(row>=0 and col>=0){
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        row = rw;
        col = cl;
        
        while(col>=0){
            if(board[row][col] == 'Q') return false;
            col--;
        }
        
       row = rw;
        col = cl;
        while(row<n && col>=0){
            if(board[row][col] == 'Q') return false;
            row++;
            col--;
        }
        
        return true;
        
    }
    
};