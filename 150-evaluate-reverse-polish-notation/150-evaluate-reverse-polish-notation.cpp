class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        
        stack<int> vals;
        
        
        for(int i=0; i<n; i++){
            
            if(tokens[i] == "+" or tokens[i] == "-" or tokens[i] == "*" or tokens[i] == "/"){
                int a = vals.top();
                vals.pop();
                int b = vals.top();
                vals.pop();
                
                if(tokens[i] == "+") vals.push(a + b);
                else if(tokens[i] == "-") vals.push(b-a);
                else if(tokens[i] == "*") vals.push(a*b);
                else if(tokens[i] == "/") vals.push(b/a);
            }
            
            else vals.push(stoi(tokens[i]));

            
        }
        
        return vals.top();
        
    }
};