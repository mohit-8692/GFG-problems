//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool checkprime(int N )
    {
        if(N == 1) return 0;
        for(int i = 2; i<=sqrt(N); i++)
        {
            if(N%i == 0)
                return 0;
        }
        return 1;
    }
    int minNumber(int arr[],int N)
    {
        int ans = 0;
        int sum =0;
        
        for(int i = 0; i<N; i++)
        {
            sum += arr[i];
        }
        if(checkprime(sum))
            return ans;
            
            int num = 1;
            while(1)
            {
                int val = num+sum;
                if(checkprime(val))
                    return num;
                else num++;
            }
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends