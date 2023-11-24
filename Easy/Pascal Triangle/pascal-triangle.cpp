//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    // int fact(int a){
    //     long long ans = 1;
    //     while(a)
    //     {
    //         ans = ans*a;
    //         a--;
    //     }
    //     return ans;
    // }
    // int comb(int n,int r)
    // {
    //     long long ans = fact(n)/(fact(r)*fact(n-r));
    //     return ans;
    // }

    // vector<long long> nthRowOfPascalTriangle(int n) {
    //     // code here
    //     vector<long long>ans;
    //     for(int i = 0; i<n; i++)
    //     {
    //         ans.push_back(comb(n-1,i));
    //     }
    //     return ans;
    // }
    
    vector<long long> nthRowOfPascalTriangle(int n){
        // vector<long long>ans;
        // long long mod = 1e9+7;
        
        // for(int i =0; i<=n; i++)
        // {
        //     long long coff = 1;
            
        //     for(int j =0; j<=i; j++)
        //     {
        //         if(j >0)
        //         {
        //             coff = (coff*(n-j+1))%mod;
        //             coff = (coff * modInverse(j,mod))%mod;
        //         }
        //         ans.push_back(coff);
        //     }
        // }
        // return ans;
         vector<long long> ans(1, 1), t;
        while (n-- > 1) {
            t.resize(ans.size() + 1, 1);
            for (int i = 1; i < ans.size(); i++) t[i] = (ans[i - 1] + ans[i]) % 1000000007;
            ans = t;
        } 
        return ans;
    } 
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends