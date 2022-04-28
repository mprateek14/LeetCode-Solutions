class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0;
        long long sum = 0;
        for(int i=1; i<=n; i++){
            if(sum + i > n) return count;
            else{
                sum += i;
                count++;
            }
        }
        
        return count;
    }
};