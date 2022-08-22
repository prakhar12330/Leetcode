class Solution {
public:
    int solveRecurr(int idx,int buy,vector<int>& prices, vector<vector<int>>&dp,int fee)
    {
        //Base Case-->
        if(idx==prices.size())return 0;
        
        //Step-->03
        if(dp[idx][buy]!=-1)return dp[idx][buy];
        int profit=0;
        if(buy==1)//Buy is a parameter
        {
            int buyKaro=-prices[idx]+solveRecurr(idx+1,0,prices,dp,fee);
            int skipKaro=0+solveRecurr(idx+1,1,prices,dp,fee);
            profit=max(buyKaro,skipKaro);
        }
        else
        {
            int sellKaro=+prices[idx]+-fee+solveRecurr(idx+1,1,prices,dp,fee);
            int skipKaro=0+solveRecurr(idx+1,0,prices,dp,fee);
            profit=max(sellKaro,skipKaro);
        }
        //Step-->02
        dp[idx][buy]=profit;
        return dp[idx][buy];
    }
    int maxProfit(vector<int>& prices, int fee) 
    {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));//Step-->01
        return solveRecurr(0,1,prices,dp,fee);
    }
};