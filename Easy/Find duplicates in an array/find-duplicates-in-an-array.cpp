//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int ,int>ans;
        vector<int>output;
    
    //   for (int i = 0; i < n; i++) {
    //         if (ans[arr[i]]) { // Corrected the condition here
    //             output.push_back(arr[i]);
    //         } else {
    //             ans[arr[i]] = true; // Corrected to set the value to true
    //         }
    //     }
    //     if(output.empty())
    //         return {-1};
    //     else
    //         return output;
        for(int i = 0; i<n; i++)
        {
            ans[arr[i]]++;
        }
        for(auto it: ans)
        {
            if(it.second > 1)
                output.push_back(it.first);
        }
        if(output.empty())
            return {-1};
        else 
            {
                sort(output.begin(), output.end());
                return output;
            }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends