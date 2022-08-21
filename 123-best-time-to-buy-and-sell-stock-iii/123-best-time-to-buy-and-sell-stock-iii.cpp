//Recursive Approach
class Solution {
public:
    int solveRecurr(int idx,int buy,vector<int>& prices,int limit,vector<vector<vector<int>>>&dp)
    {
        //Base Case-->
        if(idx==prices.size())return 0;
        if(limit==0)return 0;
        
        //Step03
        if(dp[idx][buy][limit]!=-1)
        {
            return dp[idx][buy][limit];
        }
        int profit=0;
        if(buy==1)//Buy is a parameter
        {
            int buyKaro=-prices[idx]+solveRecurr(idx+1,0,prices,limit,dp);
            int skipKaro=0+solveRecurr(idx+1,1,prices,limit,dp);
            profit=max(buyKaro,skipKaro);
        }
        else
        {
            int sellKaro=+prices[idx]+solveRecurr(idx+1,1,prices,limit-1,dp);
            int skipKaro=0+solveRecurr(idx+1,0,prices,limit,dp);
            profit=max(sellKaro,skipKaro);
        }
        //Step02
        dp[idx][buy][limit]=profit;
        return dp[idx][buy][limit];
    }
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));//Step01
        return solveRecurr(0,1,prices,2,dp);
    }
};