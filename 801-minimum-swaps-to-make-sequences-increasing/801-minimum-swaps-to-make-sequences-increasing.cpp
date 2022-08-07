//Top Down Approach
class Solution {
public:
    int solveMem(vector<int>& nums1, vector<int>& nums2,int idx,bool recentlySwapped,vector<vector<int>>&dp)
    {
        //Base Case-->When The Index Pointer Reaches Outside The Array
        if(idx==nums1.size())
        {
            return 0;
        }
        int ans=INT_MAX;
        
        int prev01=nums1[idx-1];
        int prev02=nums2[idx-1];
        
        if(dp[idx][recentlySwapped]!=-1)
        {
            return dp[idx][recentlySwapped];
        }
        
        if(recentlySwapped)
        {
            swap(prev01,prev02);
        }
        //noswap
        if(nums1[idx]>prev01 && nums2[idx]>prev02)
        {
            ans=solveMem(nums1,nums2,idx+1,0,dp);
        }
        //swap
        if(nums1[idx]>prev02 && nums2[idx]>prev01)
        {
            ans=min(ans,1+solveMem(nums1,nums2,idx+1,1,dp));
        }
        
        dp[idx][recentlySwapped]=ans;
        return dp[idx][recentlySwapped];
    }
    int minSwap(vector<int>& nums1, vector<int>& nums2)
    {
        bool recentlySwapped =0;
        nums1.insert(nums1.begin(),-1);
        nums2.insert(nums2.begin(),-1);
        int n=nums1.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solveMem(nums1,nums2,1,recentlySwapped,dp);
    }
};