class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n  = piles.size();
        
        
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        
        while(low<high){
            int mid = low + (high-low)/2;
            
            int sum = 0;
            for(int i: piles){
                sum += (i + mid -1)/mid;
            }
            
            if(sum<=h) high = mid;
            else low = mid+1;
        }
        
        return low;
        
    }
};

// FIRST OF ALL TO EAT ALL BANANAS, SPEED MUST BE >= THAN THE SIZE OF PILE SINCE AT MOST 1 PILE CAN BE EATEN AT A TIME. WE HAVE TO FIND BANANAS EATEN PER HOUR. SO OUR SEARCH SPACE WILL BECOME FROM 1 TO MAX ELEMENT IN PILE.

// NOW WE CAN BRUTEFORCE SOLUTION STARTING FROM 1 AND CHECKING IF BANANAS GET FINISHED IN h HOURS.

// LOOP IS BASICALLY CALC TOTAL HOURS. i+mid-1 MAKES THE VALUE GO TO GREATER SIDE. SUPPOSE 5 BANANAS PER HOUR AND WE HAVE TO CHECK FOR 11. 11/5 GIVES 2. BUT WE NEED IT TO BE 3. SO WE USE LITTLE MATHS FOR IT