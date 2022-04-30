class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size()-1;
        
        int ans = INT_MIN;
        
        while(low<high){
            int width = high-low;
            int ht = min(height[low], height[high]);
            int area = width*ht;
            ans = max(ans, area);
            
            if(height[low]<height[high]) low++;
            else high--;
            
        }
        
        return ans;
        
    }
};