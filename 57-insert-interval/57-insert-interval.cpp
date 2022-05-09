class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> ans;
        
        int n = intervals.size();
        
        int idx = 0;
        
        //FIRST TAKE ALL SMALLER INTERVALS AND PUT IN ANS
        while(idx<n and intervals[idx][1]<newInterval[0]){
                ans.push_back(intervals[idx]);
                idx++;
        }
        
        //NOW SOLVE THE MERGING INTERVALS
        while(idx<n and intervals[idx][0]<=newInterval[1]){
            int start = min(intervals[idx][0], newInterval[0]);
            int end = max(intervals[idx][1], newInterval[1]);
            
            newInterval[0] = start;
            newInterval[1] = end;
            idx++;
        }
        ans.push_back(newInterval);
        
        // NOW PUT ALL LARGER INTERVALS IN ANS
        while(idx<n){
            ans.push_back(intervals[idx]);
            idx++;
        }
        
        return ans;
        
    }
};