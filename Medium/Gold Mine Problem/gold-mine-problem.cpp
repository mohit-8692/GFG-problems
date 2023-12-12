//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
          int ans=0;
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                int num=M[j][i-1];
                if(j!=0)num=max(num,M[j-1][i-1]);
                if(j!=n-1)num=max(num,M[j+1][i-1]);
                M[j][i]+=num;
                if(i==m-1)ans=max(ans,M[j][m-1]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends