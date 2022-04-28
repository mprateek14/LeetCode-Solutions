class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        long long start = 1;
        long long end = num;
        
        while(start<end){
            long long mid = start + (end-start)/2;
            
            long long ans = mid*mid;
            
            if(ans == num) return true;
            else if(ans > num) end = mid-1;
            else start = mid+1;
            
        }
        
        if(start*start == num) return true;
        else return false;
        
    }
};