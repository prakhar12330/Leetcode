class Solution {
public:
    int solveRecurr(vector<int>& prices,int fee)
    {
        int n=prices.size();
        //Step-->01
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        //Step-->02
        for(int idx=n-1;idx>=0;idx--)
        {
            for(int buy=0;buy<=1;buy++)
            {
               int profit=0;
               if(buy==1)//Buy is a parameter
               {
                  int buyKaro=-prices[idx]+dp[idx+1][0];
                  int skipKaro=0+dp[idx+1][1];
                   profit=max(buyKaro,skipKaro);
               }
                else
              {
                  int sellKaro=+prices[idx]-fee+dp[idx+1][1];
                  int skipKaro=0+dp[idx+1][0];
                  profit=max(sellKaro,skipKaro);
              }
               dp[idx][buy]=profit;
             }
        }
        //Step-->03
        return dp[0][1];
    }
    int maxProfit(vector<int>& prices, int fee) 
    {
        return solveRecurr(prices,fee);
    }
};