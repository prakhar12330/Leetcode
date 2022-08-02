//Top Down Approach
class Solution {
public:
    
    int solveRecurr(vector<int>& obstacles,int currlane,int pos,vector<vector<int>>&dp)
    {
        //Base Case-->agar tumhara frog final pos pe pahuch gya tb
        int n=obstacles.size()-1;
        if(pos==n)return 0;
        
        if(dp[currlane][pos]!=-1)return dp[currlane][pos];
        
        //Case01-agar tumhare aage koi obstacle hi nhi hai tb
        if(obstacles[pos+1] !=currlane)
        {
           return solveRecurr(obstacles,currlane,pos+1,dp); 
        }
         //Case01-agar aage koi obstacle hai tb
        else
        {
            int ans=INT_MAX;
           //up-same pos-down-->teeno jagah me se ek pe kahi bhi move kara skte hai
            for(int i=1;i<=3;i++)
            {
                if(currlane!=i && obstacles[pos]!=i)
                {
                    ans=min(ans,1+solveRecurr(obstacles,i,pos,dp));
                }
            }
            dp[currlane][pos]=ans;
            return dp[currlane][pos];
            
        }
    }
    int minSideJumps(vector<int>& obstacles)
    {
        vector<vector<int>>dp(4,vector<int>(obstacles.size(),-1));
        return solveRecurr(obstacles,2,0,dp);//frog initially hmara position no.0 pe hai ar lane no.2 pe hai
    }
};