//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char, int>mp;
        for(int i = 0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        
        priority_queue<int>pq;
        for(auto i:mp)
        {
            pq.push(i.second);
        }
        while(k!=0)
        {
            int temp = pq.top();
            pq.pop();
            temp--;
            pq.push(temp);
            k--;
        }
        int ans = 0;
        while(pq.size())
        {
            int temp = pq.top();
            ans += temp*temp;
            pq.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends