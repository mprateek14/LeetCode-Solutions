class Solution {
private:
    struct compare{
       bool operator()(vector<int> &A, vector<int> &B){
           return A[0]*A[0] + A[1]*A[1] < B[0]*B[0] + B[1]*B[1];
       } ;
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<vector<int>, vector<vector<int>>, compare> q;
        
        
        for(auto it: points){
            q.push(it);
            
            if(q.size()>k) q.pop();
        }
        
        vector<vector<int>> ans;
        
        while(!q.empty()){
            ans.push_back(q.top());
            q.pop();
        }
        
        return ans;
    }
};