class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        int n = asteroids.size();
        
        stack<int> st;
        
        for(int i=0; i<n; i++){
            if(st.empty() or asteroids[i]>0) st.push(asteroids[i]);
            else{
                while(!st.empty() and st.top()>0 and st.top()<abs(asteroids[i])){
                    st.pop();
                }
                
                if(!st.empty() and st.top() == abs(asteroids[i])) st.pop();
                else if(st.empty() or st.top()<0) st.push(asteroids[i]);
            }
            
        }
        
        int m = st.size();
        
        vector<int> ans(m);
        
        for(int i=m-1; i>=0; i--){
            int num = st.top();
            ans[i] = num;
            st.pop();
        }
        
        return ans;
    }
};