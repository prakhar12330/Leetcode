//Bottom Up Approach
class Solution {
public:
    
    bool solveTab(vector<int>&nums,int target)
    {
       int n =nums.size();
       vector<vector<int>>dp(n+1,vector<int>(target+1,0));
       for(int i=0;i<=n;i++)
       {
           dp[i][0]=1;
       }
       for(int idx=n-1;idx>=0;idx--)
       {
        for(int totalSum=0;totalSum<=target;totalSum++)
         {
            bool include=0;
            if(totalSum-nums[idx]>=0)
            {
            include=dp[idx+1][totalSum-nums[idx]];
            }
            bool exclude=dp[idx+1][totalSum-0];
        
            dp[idx][totalSum]=include or exclude;
         }
       }
        return dp[0][target];
    }
    bool canPartition(vector<int>& nums)
    {
        
        int n =nums.size();//the size of the nums array
        int totalSum=0;//the total sum of the array nums
        for(int i=0;i<n;i++)
        {
            totalSum+=nums[i];
        }
        if(totalSum & 1)return false;//if total sum of the array is odd
        //if even
        int target=totalSum/2;
        return solveTab(nums,target);
    }
};