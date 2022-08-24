//Space Optimization
class Solution {
public:
    
    int solveRecurr(string&text1,string&text2)
    {
      
        int n=text1.size();
        int m=text2.size();
        vector<int>curr(m+1,0);
        vector<int>next(m+1,0);
        for(int i=n-1;i>=0;i--)
        {
             for(int j=m-1;j>=0;j--)
            {
              int ans=0;
        
              if(text1[i]==text2[j])
              {
                 ans= 1+next[j+1];
              }
              else
              {
                 ans= max(next[j],curr[j+1]);
              }
        
        
              curr[j]=ans;
        
           }
            next=curr;
        }
        
        return next[0];
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        return solveRecurr(text1,text2);
    }
};