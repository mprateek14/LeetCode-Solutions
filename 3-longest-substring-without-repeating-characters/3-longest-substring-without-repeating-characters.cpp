class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hash;
        int left = 0;
        int right = 0;
        int maxi = 0;
        
        for(right=0; right<s.length(); right++){
            while(hash.count(s[right])){
                hash.erase(s[left]);
                left++;
            }
                hash.insert(s[right]);
                maxi = max(maxi, right-left+1);
        }
        
        return maxi;
    }
};