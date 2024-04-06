//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to count number of ways to reach the nth stair
    // when order does not matter.
    long long countWays(int n) {
        // your code here
        if(n == 1)
            return 1;
        if(n == 3)
            return 2;
        if(n == 2)
            return 2;
        long long ans = 0;
        if(n%2 == 0)
            {
                ans += 2+ (n/2)-1;
            }
        else{
            ans += 2 +(n/2)-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    // taking count of testcases
    int t;
    cin >> t;

    while (t--) {
        // taking stair count
        int n;
        cin >> n;
        Solution ob;
        cout << ob.countWays(n) << endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends