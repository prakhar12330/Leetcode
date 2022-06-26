// Top-Down Approach
class Solution {
public:
    int recurrFib(int n,vector<int>& dp)
    {
       if(n==0 || n==1)return n; //Base Case 
        
       if(dp[n]!=-1)return dp[n]; 
       dp[n]=recurrFib(n-1,dp)+recurrFib(n-2,dp);
       return dp[n];
    }
    int fib(int n)
    {
        vector<int>dp(n+1);
        for(int i=0;i<n+1;i++)
        {
            dp[i]=-1;
        }
        return recurrFib(n,dp);  
    }
};