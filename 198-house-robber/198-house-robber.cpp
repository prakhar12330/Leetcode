//Top Down Approach
class Solution {
public:
    
    int solve(vector<int>& nums,int n,vector<int>&dp)
    {
        //Base Case
        if(n<0)return 0;
        if(n==0)return nums[0];
        
        if(dp[n]!=-1)return dp[n];//Step03
        
        int incl=solve(nums,n-2,dp)+nums[n];
        int excl=solve(nums,n-1,dp)+0;
        
        dp[n]= max(incl,excl); //Step02
        return dp[n];
        
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,-1); //Step01
        int ans =solve(nums,n-1,dp);// n-1 indicates the last index as we will be traversing from end 
        return ans;
    }
};