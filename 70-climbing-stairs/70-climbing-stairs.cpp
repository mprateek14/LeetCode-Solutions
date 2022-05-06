class Solution {
public:
    int climbStairs(int n) {
        if(n<=0) return 0;
        if(n<=2) return n;
        
        int prev2 = 1;
        int prev = 2;
        int cnt = 0;
        
        for(int i=2; i<n; i++){
            cnt = prev + prev2;
            prev2 = prev;
            prev = cnt;
        }
        return cnt;
    }
};