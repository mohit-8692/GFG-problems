//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	   // int temp1 = 0;
	   // int temp2 = 0;
	   // int j = n/2;
	   // int i =1;
	    
	   // for(int i = 1; i<n; i = i+2)
	   // {
	   //     temp1 = arr[i];
	   //     temp2 = arr[i+2];
	   //      arr[i+1] = temp1;
	   //     arr[i] =arr[j];
	   //     j++;
	   // }
	   
	   vector<int>ans1;
	   vector<int>ans2;
	       int j = 0;
	   for(int i = n/2; i<n; i++)
	   {
	       ans1.push_back(arr[j]);
	       ans2.push_back(arr[i]);
	       j++;
	   }
	       int k =0;
	        j= 0;
	       for(int i = 0; i<n; i++)
	   {
	        if(i%2 == 0)
	            {arr[i] = ans1[j];
	            j++;}
	        else
	            {arr[i] = ans2[k];
	            k++;}
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