//Bottom Up Approach
class Solution {
public:
    
    int solveTab(vector<int>& nums1, vector<int>& nums2)
    {
        int n=nums1.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        
        for(int idx=n-1;idx>=1;idx--)
        {
            for(int recentlySwapped=1;recentlySwapped>=0;recentlySwapped--)
            {
                int ans=INT_MAX;
        
                int prev01=nums1[idx-1];
                int prev02=nums2[idx-1];
        
        
                 if(recentlySwapped)
                 {
                    swap(prev01,prev02);
                 }
                  //noswap
                  if(nums1[idx]>prev01 && nums2[idx]>prev02)
                 {
                    ans=dp[idx+1][0];
                  }
                  //swap
                  if(nums1[idx]>prev02 && nums2[idx]>prev01)
                   {
                     ans=min(ans,1+dp[idx+1][1]);
                   }
        
                   dp[idx][recentlySwapped]=ans;
            
            }
        }
        return dp[1][0];
        
    }
    int minSwap(vector<int>& nums1, vector<int>& nums2)
    {

        nums1.insert(nums1.begin(),-1);
        nums2.insert(nums2.begin(),-1);
        return solveTab(nums1,nums2);
    }
};