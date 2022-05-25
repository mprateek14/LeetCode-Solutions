class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        vector<int> hash(26,0);
        
        int n = s.length();
        
        for(int i=0; i<n; i++){
            hash[s[i] - 'a'] = i;
        }
        
        vector<int> ans;
        
        int maxi = 0;
        int prev = 0;
        
        for(int i=0; i<n; i++){
            maxi = max(maxi, hash[s[i] - 'a']);
            if(maxi == i){
                ans.push_back(maxi-prev +1);
                prev = maxi +1;
            }
        }
        
        return ans;
    }
};