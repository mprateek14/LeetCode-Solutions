// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int a = 0;
        int b = 0;
        
        int count = 0;
        int ans;
        
        while(a<n and b<m){
            if(arr1[a]<arr2[b]){
                count++;
                if(count == k) return arr1[a];
                a++;
            }
            else {
                count++;
                if(count == k) return arr2[b];
                b++;
            }
        }
        
        while(a<n){
            count++;
            if(count == k) return arr1[a];
            a++;
        }
        
        while(b<m){
            count++;
            if(count == k) return arr2[b];
            b++;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends