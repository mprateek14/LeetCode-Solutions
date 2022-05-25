class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char, int> hash;
        
        int n = s.length();
        
        for(int i=0; i<n; i++){
            hash[s[i]] = i;
        }
        
        vector<int> ans;
        
        int maxi = 0;
        int prev = -1;
        
        for(int i=0; i<n; i++){
            maxi = max(maxi, hash[s[i]]);
            if(maxi == i){
                ans.push_back(maxi-prev);
                prev = maxi;
            }
        }
        
        return ans;
    }
};