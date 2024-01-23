//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        bool flag = 0;
        string temp = "";
        for(int i = 0; i<S.length(); i++)
        {
            if(S[i] == '.'){
                flag = 1;
            }
            if(!flag)
                temp.push_back(S[i]);
        }
        if(flag == 0)
            return S;
        reverse(S.begin(),S.end());
        string ans = "";
        int k = 0;
        for(int i =0; i<S.length(); i++)
        {
            if(S[i] == '.')
            {
            for(int j = i-1; j>=k; j--)
                {
                    ans.push_back(S[j]);
                }
                ans.push_back('.');
            k = i+1;}
        }
        ans.append(temp);
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends