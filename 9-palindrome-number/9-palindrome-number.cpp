class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x < 10){
            return true;
        }
        
        vector<int> arr;
        
        while(x>0){
            int div = x%10;
            arr.push_back(div);
            x = x/10;
        }
        
        int n = size(arr);
        
        int a = 0; int b = n-1;
        
        while(a<b){
            if(arr[a] == arr[b]){
                a++;
                b--;
            }
            else return false;
        }
        
        return true;
        
        
    }
};