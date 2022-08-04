//Bottom Up Approach
class Solution {
public:
     int solveTab(vector<int>& nums)
      {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
         for(int currInsertedIdx=n-1;currInsertedIdx>=0;currInsertedIdx--)
         {
             for(int lastInsertedIdx=currInsertedIdx-1;lastInsertedIdx>=-1;lastInsertedIdx--)
             {
                int include=0;
                if(lastInsertedIdx==-1 || nums[currInsertedIdx]>nums[lastInsertedIdx])
                {
                 include=1+dp[currInsertedIdx+1][currInsertedIdx+1];
                }  
                int exclude=0+dp[currInsertedIdx+1][lastInsertedIdx+1];
        
                dp[currInsertedIdx][lastInsertedIdx+1]= max(include,exclude);
             }
         }
         return dp[0][0];
        
     }
    int lengthOfLIS(vector<int>& nums)
    {
        return solveTab(nums);
    }
};