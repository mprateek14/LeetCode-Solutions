class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        map<int, int> hash;
        
        for(auto &trip : trips){
            hash[trip[1]] += trip[0];
            hash[trip[2]] -= trip[0];
        }
        
        
        for(auto &i : hash){
            if((capacity-=i.second) < 0) return false;
        }
        
        return true;
    }
};