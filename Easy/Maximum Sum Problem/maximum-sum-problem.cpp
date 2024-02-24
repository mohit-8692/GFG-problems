//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int help(int n,vector<int>&dp)
        {
            if(n<=0)
            return 0;
            
            int a = help(n/2,dp);
            int b = help(n/3,dp);
            int c = help(n/4,dp);
            
            return dp[n] = max({n,a+b+c});
        }
        int maxSum(int n)
        {
            vector<int>dp(n+1,-1);
            return help(n,dp);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends