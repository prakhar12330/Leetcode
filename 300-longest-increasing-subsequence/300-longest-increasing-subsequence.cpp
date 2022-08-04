class Solution {
public:
    int solveMem(vector<int>& nums,int currInsertedIdx,int lastInsertedIdx,vector<vector<int>>&dp)
      {
        if(currInsertedIdx==nums.size())
        {
            return 0;
        }
        
        if(dp[currInsertedIdx][lastInsertedIdx+1]!=-1)return dp[currInsertedIdx][lastInsertedIdx+1];
        
        int include=0;
        if(lastInsertedIdx==-1 || nums[currInsertedIdx]>nums[lastInsertedIdx])
        {
            include=1+solveMem(nums,currInsertedIdx+1,currInsertedIdx,dp);
        }
        int exclude=0+solveMem(nums,currInsertedIdx+1,lastInsertedIdx,dp);
        
        dp[currInsertedIdx][lastInsertedIdx+1]= max(include,exclude);
        return dp[currInsertedIdx][lastInsertedIdx+1];
     }
    int lengthOfLIS(vector<int>& nums)
    {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solveMem(nums,0,-1,dp);
    }
};