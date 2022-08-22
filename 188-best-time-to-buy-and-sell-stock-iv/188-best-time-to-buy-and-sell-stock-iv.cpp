//Top Down Approach Using Operation Number
class Solution {
public:
    
    int solveRecurr(int idx,int operationNo,int k, vector<int>& prices, vector<vector<int>>&dp)
    {
        if(idx==prices.size())return 0;
        
        if(operationNo==2*k)return 0;
        
        if( dp[idx][operationNo]!=-1)return  dp[idx][operationNo];
        
        int profit=0;
        if(operationNo%2==0)
        {
            int buyKaro=-prices[idx]+solveRecurr(idx+1,operationNo+1,k,prices,dp);
            int skipKaro=0+solveRecurr(idx+1,operationNo,k,prices,dp);
            profit=max(buyKaro,skipKaro);
        }
        else
        {
            int sellKaro=+prices[idx]+solveRecurr(idx+1,operationNo+1,k,prices,dp);
            int skipKaro=0+solveRecurr(idx+1,operationNo,k,prices,dp);
            profit=max(sellKaro,skipKaro);
        }
        
        dp[idx][operationNo]=profit;
        return  dp[idx][operationNo];
    }
    int maxProfit(int k, vector<int>& prices)
    {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2*k+1,-1));
        return solveRecurr(0,0,k,prices,dp);
    }
};