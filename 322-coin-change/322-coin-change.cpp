//Bottom Up Approach
class Solution {
public:
    
    int solveRecur(vector<int>& coins,int amount)
    {
        //Step01-Base Case Analysis
        vector<int>dp(amount+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<amount+1;i++)//for making a particular amount we have a three choices
        {
          for(int j=0;j<coins.size();j++) 
          {
              if(i-coins[j]>=0 && dp[i-coins[j]] !=INT_MAX)
              {
              dp[i]=min(dp[i],1+dp[i-coins[j]]);
              }
          }
        }
        if(dp[amount]==INT_MAX)return -1;
        else return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) 
    {
    
       return solveRecur(coins,amount);
       
    }
};