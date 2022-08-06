//Top Down Approach
class Solution {
public:
    
    bool solveRecurr(vector<int>&nums,int n,int idx,int totalSum,vector<vector<int>>& dp)
    {
        //Base Case01-->
        if(totalSum<0)return false;
        //Base Case02-->
        if(idx>=n)return false;
        //Base Case03-->
        if(totalSum==0)return true;
        
        if(dp[idx][totalSum]!=-1)return dp[idx][totalSum];
        
        bool include=solveRecurr(nums,n,idx+1,totalSum-nums[idx],dp);
        bool exclude=solveRecurr(nums,n,idx+1,totalSum-0,dp);
        
        dp[idx][totalSum]=include or exclude;
        return dp[idx][totalSum];
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
        
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solveRecurr(nums,n,0,target,dp);
    }
};