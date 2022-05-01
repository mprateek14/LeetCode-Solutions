class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int start = 0;
        int end = n-1;
        
        int maxL = height[start];
        int maxR = height[end];
        
        int sum = 0;
        
        
        while(start<end){
            if(maxL < maxR){
                start++;
                maxL = max(maxL, height[start]);
                sum += maxL - height[start];
            }
            else{
                end--;
                maxR = max(maxR, height[end]);
                sum += maxR - height[end];
            }
        }
        
        return sum;
        
        
    }
};