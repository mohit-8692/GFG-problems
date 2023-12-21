//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

     static bool cmp(vector<int>& a,vector<int>& b)
    {
        if(a[1]!=b[1])
        return a[1]<b[1];
        else
        return a[2]<b[2];
    }
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
         vector<vector<int>> v;
        for(int i=0;i<N;i++)
        v.push_back({S[i],F[i],i+1});
        
        sort(v.begin(),v.end(),cmp);
        vector<int> ans;
        ans.push_back(v[0][2]);
        int pre=v[0][1];
        
        for(int i=1;i<N;i++)
        {
            if(v[i][0]>pre)
            {
                ans.push_back(v[i][2]);
                pre=v[i][1];
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends