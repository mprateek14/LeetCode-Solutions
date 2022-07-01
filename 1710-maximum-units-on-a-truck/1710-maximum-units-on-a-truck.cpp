class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b){
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        
        int ans = 0;
        
        for(auto box: boxTypes){
            int temp = min(box[0], truckSize);
            ans += temp*box[1];
            truckSize -= temp;
            if(truckSize<=0) break;
        }
        return ans;
    }
};