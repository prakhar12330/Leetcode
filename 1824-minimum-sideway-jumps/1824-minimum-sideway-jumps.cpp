//Bottom Up Approach
class Solution {
public:
    
    
    int solveTab(vector<int>& obstacles)
    {
        int n=obstacles.size()-1;//End Pos
        vector<vector<int>>dp(4,vector<int>(obstacles.size(),-1));
        
        dp[0][n]=0;
        dp[1][n]=0;
        dp[2][n]=0;
        dp[3][n]=0;
        
        for(int currpos=n-1;currpos>=0;currpos--)
        {
            for(int currlane=1;currlane<=3;currlane++)
            {
               if(obstacles[currpos+1] !=currlane)
                 {
                    dp[currlane][currpos]=dp[currlane][currpos+1]; 
                 }
                else
                 {
                     int ans=INT_MAX;

                     for(int i=1;i<=3;i++)
                        {
                          if(currlane!=i && obstacles[currpos]!=i)
                         {
                            ans=min(ans,1+dp[i][currpos+1]);
                         }
                          dp[currlane][currpos]= ans; 
                         }
            
               } 
            }
        }
        
        return min(dp[2][0],min(1+dp[1][0],1+dp[3][0]));
        
    }
    int minSideJumps(vector<int>& obstacles)
    {
        return solveTab(obstacles);//frog initially hmara position no.0 pe hai ar lane no.2 pe hai
    }
};