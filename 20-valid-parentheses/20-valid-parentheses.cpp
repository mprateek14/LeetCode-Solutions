class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        
        int n = s.length();
        
//         for(char c: s){
//             switch(c){
//                 case '(' : st.push(')');break;
//                 case '{' : st.push('}');break;
//                 case '[' : st.push(']');break;
//                 default:
//                     if(st.empty() or st.top() != c) return false;
//                     else st.pop();
//             }
        
//         }
        
        
        for(char c: s){
            if(c == '(') st.push(')');
            else if(c == '{') st.push('}');
            else if(c == '[') st.push(']');
            else if(st.empty() or st.top() != c) return false;
            else st.pop();
        }
        
        return st.size() == 0;
        
    }
};