//Space Optimization
class Solution {
public:
    int solveRecurr(vector<int>& prices)
    {
        int n=prices.size();
        //Step-->01
        vector<int>curr(2,0);
        vector<int>next(2,0);
        //Step-->02
        for(int idx=n-1;idx>=0;idx--)
        {
            for(int buy=0;buy<=1;buy++)
            {
               int profit=0;
               if(buy==1)//Buy is a parameter
               {
                  int buyKaro=-prices[idx]+next[0];
                  int skipKaro=0+next[1];
                   profit=max(buyKaro,skipKaro);
               }
                else
              {
                  int sellKaro=+prices[idx]+next[1];
                  int skipKaro=0+next[0];
                  profit=max(sellKaro,skipKaro);
              }
               curr[buy]=profit;
             }
            next=curr;
        }
        //Step-->03
        return next[1];
    }
    int maxProfit(vector<int>& prices) 
    {
        return solveRecurr(prices);
    }
};