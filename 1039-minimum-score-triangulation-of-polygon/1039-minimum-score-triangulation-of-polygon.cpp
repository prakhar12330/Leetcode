//Bottom Up Approach
class Solution {
public:
    int solveTab(vector<int>& values)
    {
        int n=values.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i+2;j<n;j++)
            {
                int ans=INT_MAX;
                for(int k=i+1;k<j;k++)
                 {
                    ans=min(ans,values[i]*values[j]*values[k]+dp[i][k]+dp[k][j]); 
                 }
                 dp[i][j]=ans;
            }
        }
        return dp[0][n-1];//starting se yahi goal tha ki i ko zero pe rakh kr ar j ko n-1 pr rakh kr ans nikalo
    }
    int minScoreTriangulation(vector<int>& values) 
    {
        return solveTab(values);
    }
};