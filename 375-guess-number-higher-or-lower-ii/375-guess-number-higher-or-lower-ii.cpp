//Recursive Approach
class Solution {
public:
    
    int solveRecurr(int start,int end, vector<vector<int>>&dp)
    {
        if(start>=end)return 0;
        
        if( dp[start][end]!=-1)return  dp[start][end];//Step03
        int amnt=INT_MAX;
        for(int i=start;i<=end;i++)
        {
            amnt=min(amnt,i+max(solveRecurr(start,i-1,dp),solveRecurr(i+1,end,dp)));
        }
        //Step02
        dp[start][end]=amnt;
        return dp[start][end];
    }
    int getMoneyAmount(int n)
    {
        //Step01
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solveRecurr(1,n,dp);
    }
};