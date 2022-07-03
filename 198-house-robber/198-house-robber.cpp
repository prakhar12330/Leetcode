//Bottom Up Approach
class Solution {
public:
    
    
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,0);//Step01
        if(n==0) return 0;
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        
        dp[0]=nums[0];//Step02
        dp[1] = max(nums[0],nums[1]);
        
        //Step03
        for(int i=2;i<n;i++)
        {
           
            int incl=dp[i-2]+nums[i];
            int excl=dp[i-1];
            dp[i]=max(incl,excl);
        }
        return dp[n-1];
    }
};