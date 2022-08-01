class Solution {
public:
    
    int solveRecurr(vector<vector<char>>& matrix,int i,int j,int& maxArea,vector<vector<int>>&dp)
    {
       int rowSize=matrix.size();
       int colSize=matrix[0].size();
       //Base Case
       //if The row and col pointer moves out of the matrix
        
       
       if(i>=rowSize || j>=colSize)return 0;
       if(dp[i][j]!=-1)return dp[i][j];
       
       int right=solveRecurr(matrix,i,j+1,maxArea,dp);//right side me kitne square form ho skte hai current element pe khade ho kr
       int diagonal=solveRecurr(matrix,i+1,j+1,maxArea,dp);//diagonal side me kitne square form ho skte hai current element pe khade ho kr
       int down=solveRecurr(matrix,i+1,j,maxArea,dp);//down side me kitne square form ho skte hai current element pe khade ho kr
        
        if(matrix[i][j]=='1')
        {
            dp[i][j]=1+min(right,min(diagonal,down));//sabhi possible squares ki side ayegi isme+++
            maxArea=max(maxArea,dp[i][j]*dp[i][j]); //max me store karate rahege compoare krke ans sw
            return dp[i][j];
            
        }
        else
        {
            return dp[i][j]=0;
        }
    }
    int maximalSquare(vector<vector<char>>& matrix)
    {
       int maxArea=0;
       int row=matrix.size();
       int col=matrix[0].size();
       vector<vector<int>>dp(row,vector<int>(col,-1));
       solveRecurr(matrix,0,0,maxArea,dp);
       return maxArea;
       
    }
};