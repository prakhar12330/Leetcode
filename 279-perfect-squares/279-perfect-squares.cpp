//Top Down Approach
class Solution {
public:
    
    int solveRecurr(int n,vector<int>& dp)
    {
        //Base Case
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];//Step03
        
        int ans=n;//Because 1^2+1^2+1^2+1^2+1^2+1^2+....... 
        for(int i=1;i*i<=n;i++)
        {
            int temp=i*i;
            ans=min(ans,1+solveRecurr(n-temp,dp));
            
        }
        //Step02
        dp[n]=ans;
        return dp[n];
    }
    int numSquares(int n)
    {
        vector<int>dp(n+1,-1);//Step01
        return solveRecurr(n,dp);
    }
};