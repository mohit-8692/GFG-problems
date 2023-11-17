//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int n){
        // code here
        long sum = 0;    
        for(int i =0; i<K; i++)
        {   
            sum += arr[i];
        }
        long ans = sum;
        long j  =0;
        for(int i =K; i<n; i++)
        {
             sum += arr[i] - arr[i-K]; 
            ans = max(sum,ans);
            j++;
        }
        return ans;
    }
    
    //       long sum = 0, maxsum = 0;  
    //     for(int i = 0 ; i  < K ;i++)
    //     {
    //         sum += Arr[i];
    //         maxsum = sum;
    //     }
    //     for(int   i = K ; i < N ; i++)
    //     {            
    //         sum += Arr[i] - Arr[i-K];   
    //         maxsum = max(maxsum , sum);
    //     }
    //     return maxsum;
    // }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends