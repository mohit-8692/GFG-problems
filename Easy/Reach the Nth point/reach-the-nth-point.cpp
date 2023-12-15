//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    int mod = 1e9+7;
		    if(n==0 || n==1 || n==2)
		    {
		        return n;
		    }
		    int a=1;
		    int b=1;
		    int sum =0;
		    for(int i=2;i<=n;i++)
		    {
		      //  int c=(a%(10^9 +7) + b%(10^9 + 7))%(10^9 + 7);
		        sum = (a+b) % mod;
		        a=b;
		        b=sum;
		        
		    }
		    
		    return b;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends