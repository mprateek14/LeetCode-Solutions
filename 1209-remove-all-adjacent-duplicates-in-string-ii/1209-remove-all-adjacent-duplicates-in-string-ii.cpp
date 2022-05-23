class Solution {
public:
    string removeDuplicates(string s, int k) {
     
        stack<pair<char, int>> st;
        char cur;
        int count = 0;
        
        
        for(char c: s){
            if(st.empty() or st.top().first != c){
                st.push({c, 1});
            }
            
            else if(st.top().first == c){
                if(st.top().second == k-1){
                    int temp = k-1;
                    while(temp!=0){
                        st.pop();
                        temp--;
                    }
                }
                else st.push({c, st.top().second+1});
            }
            
            // else st.push({c, 1});
        }
        
        string ans;
        
        while(!st.empty()){
            ans+=st.top().first;
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};