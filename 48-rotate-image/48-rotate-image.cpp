class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //TWO POSSIBLE SOLUTIONS
        // 1 -> BRUTE -> CREATE NEW MATRIX. TAKE FIRST ROW AND PUT IN LAST COLUMNS OF NEW.
        // 2-> TRANSPOSE MATRIX. THE REVERSE EACH ROW.
        
        // SEE FIRST LOOP FOR TRANSPOSE. IMP.
        
        int n = matrix.size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        
    }
};