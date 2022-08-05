//Space Optimised
class Solution {
public:
    #define MOD 1000000007
    int solveTab(int d,int f,int t)
    {
        vector<int>prev(t+1,0);
        vector<int>curr(t+1,0);
        prev[0]=1;//after analysing base case
        
        for(int diceNum=1;diceNum<=d;diceNum++)
        {
            for(int targetSum=1;targetSum<=t;targetSum++)
            {
                int ans=0;
                for(int i=1;i<=f;i++)
                {
                    if(targetSum-i>=0)
                    {
                    ans=(ans%MOD+(prev[targetSum-i])%MOD)%MOD;
                    }
                }
                 curr[targetSum]=ans;
            }
            prev=curr;
        }
        return prev[t];
    }
    int numRollsToTarget(int n, int k, int target)
    {

        return solveTab(n,k,target);
    }
};