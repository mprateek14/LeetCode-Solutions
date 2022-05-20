class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long ans = mass;
        for(int i: asteroids){
            if(i>ans) return false;
            else ans+=i;
        }
        
        return true;
    }
};