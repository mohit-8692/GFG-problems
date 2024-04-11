//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
   string bin(int dec)
    {
        string  bin;
        if(dec==0)
        {
            return "0";
        }
        while(dec!=0)
        {
            bin+=(dec % 2 +'0');
            dec=dec/2;
        }
        int n=bin.length();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            swap(bin[i],bin[j]);
            i++,j--;
        }
        return bin;
    }
    int grayToBinary(int n)
    {
        // converting number into its equivalent binary
        string binary=bin(n);       
        string gray="";
        gray=binary[0];
        //  converting binary string into its equivalent gray code string
        for(int i=1;i<binary.length();i++)
        {
            gray+=((binary[i]-'0') ^ (gray[i-1]-'0'))+'0';
        }
        // converting gray code string into its equivalent integer
        int mod=1;
        int ans=0;
        for(int i=gray.length()-1;i>=0;i--)
        {
            ans+=((gray[i]-'0') * mod);
            mod=mod * 2;
            
        }
        return ans;

}


};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends