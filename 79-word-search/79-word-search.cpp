class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int row = board.size();
        int col = board[0].size();
        
        vector<int> dir = {-1,0,1,0,-1};
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(helper(board, i, j, word, 0, dir)) return true;
            }
        }
        
        return false;
        
    }
    
    bool helper(vector<vector<char>>& board, int i, int j, string &word, int idx, vector<int> &dir){
        if(idx == word.length()) return true;
        
        if(i<0 or i>=board.size() or j<0 or j>=board[0].size() or board[i][j]!=word[idx]) return false;
        
        
        char c = board[i][j];
        board[i][j] = '.';
        
        for(int k=0; k<4; k++){
            if(helper(board, i+dir[k], j+dir[k+1], word, idx+1, dir)) return true;
        }
        
        // bool res = helper(board, i+1, j, word, idx+1) or helper(board, i-1, j, word, idx+1) or helper(board, i, j+1, word, idx+1) or helper(board, i, j-1, word, idx+1);
        board[i][j] = c;
        
        return false;
    }
    
};