//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
       if(str1.length() != str2.length())
        return 0;
        int arr1[256];
        int arr2[256]; 
        
        for(int i = 0; i<256; i++)
        {
            arr1[i] = -1;
            arr2[i] = -1;
        }
        
        for(int i = 0; i<str1.length(); i++)
        {
            char a = str1[i];
            char b = str2[i];
            
            if(arr1[a] == -1 && arr2[b] == -1)
               { 
                arr1[a] = b;
                arr2[b] = a;
               }
        
        else if(arr1[a] != b || arr2[b] != a)
            {
                return false;
            }
            
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends