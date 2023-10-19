//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    #include<math.h>
    public:
    int mod = 1e9 + 7;
    long long int ans = 0;
    int Maximize(int a[],int n)
    {
        sort(a,a+n);
        for(int i=0;i<n;i++)
        ans += 1ll*a[i]*i;
        
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends