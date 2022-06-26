//Bottom-Up Approach
class Solution {
public:
    
    int solve(vector<int>& cost,int n)
    {
        //Step01-Creation of dp array
        vector<int>dp(n+1);
        //Step02-base case analysis
        dp[0]=cost[0];
        dp[1]=cost[1];
        //Step03
        for(int i=2;i<n;i++)
        {
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        
        return min(dp[n-1],dp[n-2]);
        
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        int ans=solve(cost,n);
        return ans;
    }
        
};