//Space Optimization
class Solution {
public:
     int solveTab(vector<int>& nums)
      {
        int n=nums.size();
        vector<int>curr(n+1,0);
        vector<int>next(n+1,0);
        
         for(int currInsertedIdx=n-1;currInsertedIdx>=0;currInsertedIdx--)
         {
             for(int lastInsertedIdx=currInsertedIdx-1;lastInsertedIdx>=-1;lastInsertedIdx--)
             {
                int include=0;
                if(lastInsertedIdx==-1 || nums[currInsertedIdx]>nums[lastInsertedIdx])
                {
                 include=1+next[currInsertedIdx+1];
                }  
                int exclude=0+next[lastInsertedIdx+1];
        
                curr[lastInsertedIdx+1]= max(include,exclude);
             }
             next=curr;
         }
         return next[0];
        
     }
    int lengthOfLIS(vector<int>& nums)
    {
        return solveTab(nums);
    }
};