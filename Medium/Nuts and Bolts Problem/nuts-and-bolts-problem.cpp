//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
    const std::vector<char> valid_chars = {'!', '#', '$', '%', '&', '*', '?', '@', '^'};
    
    // Sort nuts and bolts arrays
    std::sort(nuts, nuts + n);
    std::sort(bolts, bolts + n);
    
    // Create a map to keep track of the occurrences of each character in nuts and bolts
    std::vector<int> count(9, 0);
    
    // Fill the count array with the occurrences of each valid character in nuts
    for (int i = 0; i < n; i++) {
        auto it = std::find(valid_chars.begin(), valid_chars.end(), nuts[i]);
        if (it != valid_chars.end()) {
            int index = std::distance(valid_chars.begin(), it);
            count[index]++;
        }
    }
    
    // Fill the nuts and bolts arrays in the correct order based on count
    int index = 0;
    for (int i = 0; i < 9; i++) {
        while (count[i] > 0) {
            nuts[index] = valid_chars[i];
            bolts[index] = valid_chars[i];
            index++;
            count[i]--;
        }
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends