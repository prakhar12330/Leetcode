//Bottom Up Approach Using Operation Number
class Solution {
public:
    
     int solveRecurr(int k, vector<int>& prices)
     {
        //Step01-->
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2*k+1,0));
         for(int idx=n-1;idx>=0;idx--)
         {
             for(int operationNo=0;operationNo<2*k;operationNo++)
             {
                 int profit=0;
                if(operationNo%2==0)
                {
                  int buyKaro=-prices[idx]+dp[idx+1][operationNo+1];
                  int skipKaro=0+dp[idx+1][operationNo];
                  profit=max(buyKaro,skipKaro);
                 }
                else
                 {
                  int sellKaro=+prices[idx]+dp[idx+1][operationNo+1];
                  int skipKaro=0+dp[idx+1][operationNo];
                  profit=max(sellKaro,skipKaro);
                 }
          
               dp[idx][operationNo]=profit;
             }
         }
         
         return dp[0][0];
    }
    int maxProfit(int k, vector<int>& prices)
    {
      
        return solveRecurr(k,prices);
    }
};