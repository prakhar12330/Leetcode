//Bottom Up Approach
class Solution {
public:
    
    int solveRecurr(string&text1,string&text2)
    {
      
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--)
        {
             for(int j=m-1;j>=0;j--)
            {
              int ans=0;
        
              if(text1[i]==text2[j])
              {
                 ans= 1+dp[i+1][j+1];
              }
              else
              {
                 ans= max(dp[i+1][j],dp[i][j+1]);
              }
        
        
              dp[i][j]=ans;
        
           }
        }
        
        return dp[0][0];
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        return solveRecurr(text1,text2);
    }
};