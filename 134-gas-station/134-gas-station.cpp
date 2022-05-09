class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size();
        
        int costSum = 0;
        
        int gasSum = 0;
        
        int total = 0;
        int start = -1;
        
        
        for(int i=0; i<n; i++){
            gasSum += gas[i];
            costSum += cost[i];
            total = total + gas[i]-cost[i];
            if(start == -1) start = i;
            
            if(total<0){
                total = 0;
                start = -1;
            }
        }
        
        if(gasSum<costSum) return -1;
        
        if(total>=gasSum - costSum) return start;
        else return -1;
        
        
    }
};