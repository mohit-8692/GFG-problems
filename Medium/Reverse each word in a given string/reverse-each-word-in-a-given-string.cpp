//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        stack<char>st;
        string ans = "";
        bool flag = 0;
        int mark = 0;
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == '.')
            {
                mark = 1;
            }
        }
        if(!mark)
        {
            reverse(s.begin(), s.end());
            return s;
        }
        
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] =='.')
                flag  = 1;
            if(!flag)
            {
             st.push(s[i]);   
            }
            if(flag)
            {
                while(!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
            flag =0;
            ans.push_back('.');
            }
        }
        for(int i = s.length()-1; i>=0; i--)
            {
                if(s[i] =='.')
                    break;
                else
                    ans.push_back(s[i]);
                
            }
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
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends