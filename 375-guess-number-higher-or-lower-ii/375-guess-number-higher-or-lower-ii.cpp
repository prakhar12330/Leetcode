//Bottom Up Approach
class Solution {
public:
    
    int solveTab(int n)
    {
        vector<vector<int>>dp(n+2,vector<int>(n+2,0));
        for(int start=n;start>=1;start--)
        {
            for(int end=start;end<=n;end++)
            {
                if(start==end) continue;
                int amnt=INT_MAX;
                for(int i=start;i<=end;i++)
                {
                   amnt=min(amnt,i+max(dp[start][i-1],dp[i+1][end]));
                }
                dp[start][end]=amnt;
            }
        }
        return dp[1][n];
    }
    int getMoneyAmount(int n)
    {
        return solveTab(n);
    }
};