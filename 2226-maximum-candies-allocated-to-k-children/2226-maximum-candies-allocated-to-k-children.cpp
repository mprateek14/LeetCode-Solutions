class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        
        int n = candies.size();
        
        int low = 0;
        int high = *max_element(candies.begin(), candies.end());
        
        while(low<high){
            int mid = (low+high+1)/2;
            long long sum = 0;
            for(int i: candies){
                sum += i/mid;
                if(sum>k) break;
            }
            
            if(k>sum) high = mid-1;
            else low = mid;
        }
        
        return low;
        
    }
    
};