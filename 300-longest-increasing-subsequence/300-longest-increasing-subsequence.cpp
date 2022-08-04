//Optimised Approach-->DP+Binary Search
class Solution {
public:
     int solveOptimisation(vector<int>& nums)
     {
        int n=nums.size(); 
        if(n==0)return 0;
        vector<int>ans;
        ans.push_back(nums[0]);
         for(int i=1;i<n;i++)
         {
             if(nums[i]>ans.back())
             {
                 ans.push_back(nums[i]);
             }
             else
             {
                 //Find The Just Bada Element In The Ans
                 int index=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                 ans[index]=nums[i];
             }
         }
         return ans.size();
        
     }
    int lengthOfLIS(vector<int>& nums)
    {
        return  solveOptimisation(nums);
    }
};