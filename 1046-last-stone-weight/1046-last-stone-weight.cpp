class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());
        
        int n = stones.size()-1;
        
        priority_queue<int> q;
        
        for(int i: stones) q.push(i);
        
        
        while(q.size()>=0){
            if(q.empty()) return 0;
            
            if(q.size() == 1) return q.top();
            
            
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            
            if(a == b) continue;
            else q.push(a-b);
            
        }
        
        
        return q.top();
        
        
    }
};