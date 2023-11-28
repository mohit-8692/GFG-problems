//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{   int k = (n/2)-1;
	    // Your code goes here
	    for(int i = n-1; i >=n/2; i--)
	    {
	        arr[i] <<= 10;
	        arr[i] |= arr[k];
	        k--;
	    }
	    k = 0;
	    for(int i =n/2; i<n; i++)
	    {
	        arr[k++] = arr[i] & 1023;
	        arr[k++] = arr[i] >> 10;
	    }
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends