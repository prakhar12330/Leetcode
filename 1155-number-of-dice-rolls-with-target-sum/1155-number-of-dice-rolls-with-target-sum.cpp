//Top Down Approach
class Solution {
public:
    #define MOD 1000000007
    int solveMem(int diceNum,int numFaces,int targetSum,vector<vector<int>>&dp)
    {
        //Base Case 01
        if(targetSum<0)return 0;
        //Base Case 02-->agar hmare pass ek bhi dice nhi hai ar hume koi targetSum chahiye 
        if(diceNum==0 && targetSum != 0)return 0;
        //Base Case 03-->agar hmare pass dices to hai pr hume koi targetSum nhi chahiye 
        if(diceNum!=0 && targetSum == 0)return 0;
        //Base Case 04-->agar hmare pass ek bhi dice nhi hai ar na hi hume koi targetSum banana hai 
        if(diceNum==0 && targetSum==0)return 1;
        
        if(dp[diceNum][targetSum]!=-1)return dp[diceNum][targetSum];
        
        int ans=0;
        for(int i=1;i<=numFaces;i++)
        {
            ans=(ans%MOD+solveMem(diceNum-1,numFaces,targetSum-i,dp)%MOD)%MOD;
        }
        dp[diceNum][targetSum]=ans;
        return dp[diceNum][targetSum];
    }
    int numRollsToTarget(int n, int k, int target)
    {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return solveMem(n,k,target,dp);
    }
};