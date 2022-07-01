class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int n = rocks.size();
        
        vector<int> required(n);
        
        for(int i=0; i<n; i++){
            required[i] = capacity[i] - rocks[i];
        }
        
        sort(required.begin(), required.end());
        
        int ans = 0;
        
        for(int i: required){
            if(additionalRocks<=0) break;
            if(i == 0) ans++;
            
            else if(i>additionalRocks) break;
            
            else{
                additionalRocks -= i;
                ans++;
            }
        }
        
        return ans;
        
    }
};