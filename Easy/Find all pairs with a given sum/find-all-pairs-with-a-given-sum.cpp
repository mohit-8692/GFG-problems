//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here 
       sort(B,B+M);
       sort(A,A+N);
      
       vector<pair<int,int>>ans;
       int j = M-1;
       int i = 0;
       while(i < N && j >=0)
       {
           int sum = A[i] +B[j];
           if(sum == X)
           {
                pair<int,int>abc(A[i], B[j]);
                ans.push_back(abc);
                i++; j--;
           }
            else if(sum > X)
                j--;
                else 
                i++;
       }
       return ans;
      
    }
};


//{ Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}
// } Driver Code Ends