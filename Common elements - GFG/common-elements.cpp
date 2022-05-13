// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int a = 0;
            int b = 0;
            int c = 0;
            
            vector<int> ans;
            
            while(a<=n1-1 and b<=n2-1 and c<=n3-1){
                if(A[a] == B[b] and B[b] == C[c]){
                    if(ans.size()){
                        if(A[a] == ans.back()){
                            a++; b++; c++;
                            continue;
                        }
                    }
                    ans.push_back(A[a]);
                    a++;
                    b++;
                    c++;
                }
                else if(min(A[a], min(B[b], C[c])) == A[a]) a++;
                else if(min(A[a], min(B[b], C[c])) == B[b]) b++;
                else c++;
            }
            
            
            
            return ans;
            
        }
        

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends