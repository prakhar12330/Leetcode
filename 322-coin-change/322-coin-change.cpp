//Top Down Approach
class Solution {
public:
    
    
    int solveRecur(vector<int>& coins,int amount,vector<int>& dp)
    {
        //Base Case
        if(amount==0)return 0;
        if(amount<0) return INT_MAX;
        
        int mini=INT_MAX;
        
        if(dp[amount]!=-1)return dp[amount];
        
        for(int i=0;i<coins.size();i++)
        {
            int ans=solveRecur(coins,amount-coins[i],dp);
            if(ans!=INT_MAX)
            {
            mini=min(mini,1+ans);
            }
        }
        dp[amount]=mini;
        return mini;
        
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int>dp(amount+1,-1);
       int ans=solveRecur(coins,amount,dp);
       if(ans==INT_MAX)
          return -1;
       else 
          return ans;
    }
};