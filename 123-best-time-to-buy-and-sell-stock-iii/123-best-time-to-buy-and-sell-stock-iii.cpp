//Bottom Up Approach
class Solution {
public:
    int solveRecurr(vector<int>& prices)
    {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));//Step01
        for(int idx=n-1;idx>=0;idx--)
        {
            for(int buy=0;buy<=1;buy++)
            {
              for(int limit=1;limit<=2;limit++)
              {
                  int profit=0;
                  if(buy==1)//Buy is a parameter
                  {
                     int buyKaro=-prices[idx]+dp[idx+1][0][limit];
                     int skipKaro=0+dp[idx+1][1][limit];
                     profit=max(buyKaro,skipKaro);
                  }
                  else
                  {
                   int sellKaro=+prices[idx]+dp[idx+1][1][limit-1];
                   int skipKaro=0+dp[idx+1][0][limit];
                   profit=max(sellKaro,skipKaro);
                  }
                 
                 dp[idx][buy][limit]=profit;
                                               
               }
            }
        }
        return dp[0][1][2];
    }
    int maxProfit(vector<int>& prices) 
    {
        
        return solveRecurr(prices);
    }
};