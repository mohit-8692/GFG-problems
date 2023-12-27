//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
       int m=matrix.size();
        int n=matrix[0].size();
        int k=0;
        vector<int>v={};
        for(int a=0;a<n;a++){
            int j=k;
            int i=0;
            while(i<=a and j>=0){
                v.push_back(matrix[i][j]);
                i++;
                j--;
            }
            k++;
        }
        k=1;
        for(int a=1;a<m;a++){
            int j=n-1;
            int i=a;
            while(i<m and j>=k){
                v.push_back(matrix[i][j]);
                i++;
                j--;
            }
            k++;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends