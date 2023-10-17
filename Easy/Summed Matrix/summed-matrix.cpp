//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        // if(q== 1 or q > n*2)
        //     return 0;
        //     int i = 1;
        // long long mid = (n/2) +1;
        //     if(q >= mid)
        //         return (n*2)+1 -q;
        //     else 
        //         return q-i;
         if(q > 2*n) return 0;
        long c = (2 + 2*n)/2;
        return n-abs(c - q);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends