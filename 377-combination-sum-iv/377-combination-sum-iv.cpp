//Recursive Approach
class Solution {
public:
    
    int solveRecurr(vector<int>& nums, int target,vector<int>& dp)
    {
        //Base Case 
        if(target==0)return 1;
        if(target<0)return 0;
        if(dp[target]!=-1)return dp[target];//Step03
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=solveRecurr(nums,target-nums[i],dp);
        }
        //Step02
        dp[target]=sum;
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target)
    {
        vector<int> dp(target+1,-1);//Step01
        return solveRecurr(nums,target,dp);
    }
};