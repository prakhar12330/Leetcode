//Top Down Approach
class Solution {
public:
    
    int solveMem(int n, vector<int>&dp)
    {
         if(n<=1)return 1;
        
        if(dp[n]!=-1)return dp[n];//Step03
        
        int ans=0;
        //Consider i as root node
        for(int i=1;i<=n;i++)
        {
            ans+= solveMem(i-1,dp)*solveMem(n-i,dp);
        }
        
        //Step02
        dp[n]=ans;
        return dp[n];
    }
    int numTrees(int n)
    {
       vector<int>dp(n+1,-1);//Step01
       return solveMem(n,dp);
    }
};