//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    set<vector<int>>st;
    vector<int>temp;
    void help(vector<int>&vis,vector<int>&arr,int pos)
    {
        if(temp.size() ==  vis.size())
        {
            st.insert(temp);return;
            
        }
        if(pos>=  vis.size())
        {
            return ;
        }
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i] == 0)
            {
                temp.push_back(arr[i]);
                vis[i]=1;
                help(vis,arr,i);
                vis[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) 
    {
        vector<int>vis(n,0);
        help(vis,arr,0);
        vector<vector<int>>ans;
        
        for(auto x:st)
        ans.push_back(x);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends