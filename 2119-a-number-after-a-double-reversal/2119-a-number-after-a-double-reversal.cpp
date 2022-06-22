class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        string s = to_string(num);
        reverse(s.begin(), s.end());
        
        int n = stoi(s);
        
        s = to_string(n);
        reverse(s.begin(), s.end());
        n = stoi(s);
        
        if(n == num) return true;
        
        return false;
        
    }
};