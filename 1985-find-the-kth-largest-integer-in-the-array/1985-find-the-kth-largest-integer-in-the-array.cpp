class comparator{
  public:
        bool operator() (string &a, string &b){
            if(a.size()!=b.size()) return a.size()>b.size();
            return a>b;
        }
};
class Solution {
public:
    
    string kthLargestNumber(vector<string>& nums, int k) {
        
        priority_queue<string, vector<string>, comparator> q;
        
        for(string i: nums){
            q.push(i);
            if(q.size()>k) q.pop();
            
        }
        
        return (q.top());
        
    }
};