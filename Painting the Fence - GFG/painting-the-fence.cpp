// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    #define mod 1000000007
    int dp[10001];
    long long Sol(int n,int k)
    {
      if(n==0) return 0;
      else if(n==1) return k;
      else if(n==2) return k*k; // same as k + k*(k-1)
      else if(dp[n]!=0) return dp[n];
      else
      return dp[n]=((k-1)%mod) *( (Sol(n-1,k)%mod + Sol(n-2,k)%mod )%mod )%mod;
     }

      long long countWays(int n, int k)
          {
          // code here
          dp[n+1];
          memset(dp,0,sizeof dp);
          return Sol(n,k)%mod;

          } 
};

// { Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends