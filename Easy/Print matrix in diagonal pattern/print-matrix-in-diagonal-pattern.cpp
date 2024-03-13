//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         vector<int> ans;

    int numRows = mat.size();
    if (numRows == 0) // Check if the matrix is empty
        return ans;
    int numCols = mat[0].size();

    for (int i = 0; i < numRows + numCols - 1; i++) {
        vector<int> temp;
        int start_row, start_col;

        // Determine starting point for current diagonal
        if (i < numRows) {
            start_row = i;
            start_col = 0;
        } else {
            start_row = numRows - 1;
            start_col = i - numRows + 1;
        }

        // Traverse current diagonal
        int row = start_row;
        int col = start_col;
        while (row >= 0 && col < numCols) {
            temp.push_back(mat[row][col]);
            row--;
            col++;
        }

        // Reverse temp if necessary
        if (i % 2 != 0) {
            reverse(temp.begin(), temp.end());
        }

        // Append temp to ans
        for (int k = 0; k < temp.size(); k++) {
            ans.push_back(temp[k]);
        }
    }

    return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends