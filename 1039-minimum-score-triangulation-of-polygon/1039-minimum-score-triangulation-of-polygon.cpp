//Top Down Approach
class Solution {
public:
    int solveMem(vector<int>& values,int i,int j,vector<vector<int>>&dp)
    {
        //Base Case
        if(i+1==j)return 0;
        int ans=INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        for(int k=i+1;k<j;k++)
        {
           ans=min(ans,values[i]*values[j]*values[k]+solveMem(values,i,k,dp)+solveMem(values,k,j,dp)); 
        }
        dp[i][j]=ans;
        return  dp[i][j];
    }
    int minScoreTriangulation(vector<int>& values) 
    {
        int n=values.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solveMem(values,0,n-1,dp);
    }
};