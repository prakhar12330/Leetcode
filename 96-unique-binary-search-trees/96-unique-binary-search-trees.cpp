//Top Down Approach
class Solution {
public:
    
    int solveTab(int n)
    {
        vector<int>dp(n+1,0);//Step01
        
        //Step02
        dp[0]=1;
        dp[1]=1;
        
        //Step03
        //i represents no of nodes
        for(int i=2;i<=n;i++)
        {
            // j represents which node is to be made root
            for(int j=1;j<=i;j++)
           {
            dp[i]+=dp[j-1]*dp[i-j];
           }
        }
        return dp[n];
    }
    int numTrees(int n)
    {
     
       return solveTab(n);
    }
};