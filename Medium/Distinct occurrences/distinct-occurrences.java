//{ Driver Code Starts
import java.util.*;

class Distinct_Occurrences
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0)
		{
			String line = sc.nextLine();
			String S = line.split(" ")[0];
			String T = line.split(" ")[1];
			
			Solution ob = new Solution();
			System.out.println(ob.subsequenceCount(S,T));
			t--;
		}
	}
}
// } Driver Code Ends


/*You are required to complete this method*/

class Solution
{
    int mod = (int)(Math.pow(10,9)+7);
    int find(int i, int j, String s, String t, int dp[][]){
        if(j<0){
            return 1;
        }
        if(i<0){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(s.charAt(i) == t.charAt(j)){
            int take = find(i-1,j-1,s,t,dp);
            int ntake = find(i-1,j,s,t,dp);
            dp[i][j] = (take+ntake)%mod;
        }
        else{
            dp[i][j] = find(i-1,j,s,t,dp);
        }
        return dp[i][j];
    }
    int  subsequenceCount(String s, String t)
    {
    // Your code here
      int n = s.length();
      int m = t.length();
      int dp[][] = new int[n][m];
      for(int val[] : dp){
          Arrays.fill(val,-1);
      }
      int ans = find(n-1,m-1,s,t,dp);
      return ans;
    }
}