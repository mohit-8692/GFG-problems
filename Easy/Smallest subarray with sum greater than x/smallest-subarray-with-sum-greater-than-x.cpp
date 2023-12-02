//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
       // Your code goes here  
        int sum = 0, ans = n+1;
        
        if(arr[0] > x) return 1;
        
        for(int i=1; i<n; i++) {
            
            if(arr[i] > x) return 1;
            
            sum = arr[i];
            for(int j=i-1; j>=0; j--) {
                sum = sum + arr[j];
                if(sum > x) {
                    ans = min(ans, i-j+1);
                    break;
                }
            }
        }
        return (ans == n+1) ? 0 : ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends