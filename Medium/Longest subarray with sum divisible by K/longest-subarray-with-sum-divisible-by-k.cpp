//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	   // int count = 0;
	   // for(int i =0; i<n; i++)
	   // {
	   //     int sum =0;
	   //     for(int j= i; j<n; j++)
	   // {
	   //      sum += arr[j];
	   //        if( sum%k ==0 )
	   //         {
	   //             count = max(count,j-i+1);     
	   //         }
	   // }
	        
	   // }
	   // return count;
	   
	    unordered_map<int, int>mpp;
	    int maxi=0;
	    int sum=0;
	    mpp[0]=-1;
	    for(int i=0; i<n; i++){
	        sum+=arr[i];
	        int rem=sum%k;
	        while(rem<0) rem+=k;
	        if(mpp.find(rem)==mpp.end()){
	            mpp[rem]=i;
	        }else{
	            maxi=max(maxi, i-mpp[rem]);
	        }
	    }
	    return maxi;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends