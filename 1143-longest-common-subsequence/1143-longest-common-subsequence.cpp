//Top Down Approach
class Solution {
public:
    int solveRecurr(string&text1,string&text2,int i,int j, vector<vector<int>>&dp)
    {
        //Base Case-->
        if(i==text1.size()||j==text2.size())return 0;
        
        //Steo03-->
        if(dp[i][j]!=-1)return dp[i][j];
        
        int ans=0;
        
        if(text1[i]==text2[j])
        {
            ans= 1+solveRecurr(text1,text2,i+1,j+1,dp);
        }
        else
        {
            ans= max(solveRecurr(text1,text2,i+1,j,dp),solveRecurr(text1,text2,i,j+1,dp));
        }
        
        //Steo02-->
        dp[i][j]=ans;
        return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        //Steo01-->
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        return solveRecurr(text1,text2,0,0,dp);
    }
};