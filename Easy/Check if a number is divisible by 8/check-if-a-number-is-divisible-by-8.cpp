//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool check(int temp)
    {
        // int rem = 0;
        // while(temp)
        //     {
        //         rem = temp%8;
        //         temp /= 8;
        //     }
            if(temp%8 ==0)
                return 1;
            else
                return 0;
    }
    
    int DivisibleByEight(string s){
        //code here
        
        if(s.length()<=3)
            {
            int temp = stoi(s);
            if(check(temp))
                return 1;
            else return -1;
            }
        else
        {
            string str = s.substr(s.length()-3);
            int temp = stoi(str);
            if(check(temp))
                return 1;
            else return -1;
        }
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends