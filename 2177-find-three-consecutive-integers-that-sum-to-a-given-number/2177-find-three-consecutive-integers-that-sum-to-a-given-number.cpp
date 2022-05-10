class Solution {
public:
    vector<long long> sumOfThree(long long num) {
            
        vector<long long> ans;
        
        if(num%3) return ans;
        
        long long a = num/3;
        
        ans.push_back(a-1);
        ans.push_back(a);
        ans.push_back(a+1);
        
        return ans;
    }
};