// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        if(n<3) return -1;
        
         int maxi = INT_MIN;
         int smaxi = INT_MIN;
         int tmaxi = INT_MIN;
         
         for(int i=0; i<n; i++){
             if(a[i]>maxi){
                 tmaxi = smaxi;
                 smaxi = maxi;
                 maxi = a[i];
             }
             else if(a[i]>smaxi){
                 tmaxi = smaxi;
                 smaxi = a[i];
             }
             else if(a[i]>tmaxi) tmaxi = a[i];
         }
         
         return tmaxi;
    }

};

// { Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}     // } Driver Code Ends