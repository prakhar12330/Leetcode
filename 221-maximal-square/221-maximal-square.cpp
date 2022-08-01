//Space  Optimized
class Solution {
public:
    
     int solveTab(vector<vector<char>>& matrix,int &maxArea)
     {
       int n=matrix.size();
       int m=matrix[0].size();

       vector<int>curr(m+1,0);
       vector<int>next(m+1,0);
         
       for(int i=n-1;i>=0;i--)
       {
           for(int j=m-1;j>=0;j--)
           {
               int right=curr[j+1];
               int diagonal=next[j+1];
               int down=next[j];
        
               if(matrix[i][j]=='1')
                {
                curr[j]=1+min(right,min(diagonal,down));
                maxArea=max(maxArea,curr[j]*curr[j]); 
                }
                else
                {
                   curr[j]=0;
                }
           }
           next=curr;
       }
       return next[0];
       
    }
    int maximalSquare(vector<vector<char>>& matrix)
    {
       int maxArea=0;
       int n=matrix.size();
       int m=matrix[0].size();
       solveTab(matrix,maxArea);
       return maxArea;
       
    }
};