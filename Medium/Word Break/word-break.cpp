//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    bool help(string s, set<string>&st,int index)
    {
        if(index == s.length())return true;
        string temp = "";
        bool a = false;
        for(int i = index; i<s.length(); i++)
        {
            temp += s[i];
            if(st.find(temp)!=st.end())
                a = a|help(s,st,i+1);
        }
        return a;
    }

    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
       set<string>st;
       for(int i =0; i<n; i++)
       {
           st.insert(dictionary[i]);
       }
       return help(s,st,0);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends