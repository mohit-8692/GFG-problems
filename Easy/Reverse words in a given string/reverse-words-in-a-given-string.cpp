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
       string word;
       vector<string>ans;
       
       for(int i = 0; i<S.length(); i++)
       {
           if(S[i] == '.')
           {
               ans.push_back(word);
               word ="";
           }
           else{
               word += S[i];
           }
       }
       S = word;
       reverse(ans.begin(), ans.end());
       for(int i = 0; i<ans.size();i++)
       {
           S += "."+ans[i];
       }
       return S;
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