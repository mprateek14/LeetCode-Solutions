class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n = s1.length();
        int m = s2.length();
        
        if(n>m) return false;
        
        unordered_map<char, int> cur;
        unordered_map<char, int> goal;
        
        for(char c: s1){
            cur[c]++;
        }
        
        for(int i=0; i<m; i++){
            goal[s2[i]]++;
            if(i>=n){
                goal[s2[i-n]]--;
                cout << goal[s2[i-n]];
                if(goal[s2[i-n]] == 0) goal.erase(s2[i-n]);
            }
            if(cur == goal) return true;
        }
        
        return false;
    }
};