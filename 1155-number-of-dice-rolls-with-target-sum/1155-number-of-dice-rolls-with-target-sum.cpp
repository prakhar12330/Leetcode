//Bottom Up Approach
class Solution {
public:
    #define MOD 1000000007
    int solveTab(int d,int f,int t)
    {
        vector<vector<int>>dp(d+1,vector<int>(t+1,0));
        dp[0][0]=1;//after analysing base case
        
        for(int diceNum=1;diceNum<=d;diceNum++)
        {
            for(int targetSum=1;targetSum<=t;targetSum++)
            {
                int ans=0;
                for(int i=1;i<=f;i++)
                {
                    if(targetSum-i>=0)
                    {
                    ans=(ans%MOD+(dp[diceNum-1][targetSum-i])%MOD)%MOD;
                    }
                }
                 dp[diceNum][targetSum]=ans;
            }
        }
        return dp[d][t];
    }
    int numRollsToTarget(int n, int k, int target)
    {

        return solveTab(n,k,target);
    }
};