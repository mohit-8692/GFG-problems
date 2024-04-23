//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        // code here
        int mod = 1e9+7;
        if(n == 1 || n == 2)return 1;
        long long a  = 1, b = 1;
        int ans = 1;
        int val = 0;
        for(int i = 3; i<=n; i++)
        {
            ans = a+b;
            a = b;
            ans %=mod;
            b %=mod;
            a %=mod;
            b = ans;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends