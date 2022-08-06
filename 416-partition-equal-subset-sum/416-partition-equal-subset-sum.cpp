//Space Optimised
class Solution {
public:
    
    bool solveTab(vector<int>&nums,int target)
    {
       int n =nums.size();
        
        vector<int>curr(target+1,0);
        vector<int>next(target+1,0);
        
        curr[0]=1;
        next[0]=1;
       
       for(int idx=n-1;idx>=0;idx--)
       {
        for(int totalSum=0;totalSum<=target;totalSum++)
         {
            bool include=0;
            if(totalSum-nums[idx]>=0)
            {
            include=next[totalSum-nums[idx]];
            }
            bool exclude=next[totalSum-0];
        
            curr[totalSum]=include or exclude;
         }
           next=curr;
       }
        return next[target];
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