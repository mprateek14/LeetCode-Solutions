class Solution {
public:
    int fib(int n) {
        // int arr[n+2];
        // arr[0] = 0;
        // arr[1] =1;
        
        if(n <=1) return n;
        
        int a = 0;
        int b = 1;
        int c = 0;
        
        for(int i=2; i<=n; i++){
            c = a+b;
            a = b;
            b = c;
        }

        return c;
    }
};