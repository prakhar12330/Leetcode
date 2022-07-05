class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
       int max_count=1;
        int count=1;
        sort(nums.begin(),nums.end());
        if(nums.size()<1)
        {
            return 0;
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
            if(nums[i-1]==nums[i]-1)
            {
               count++;
               max_count=max(count,max_count);
            }
            else
            {
                count=1;
            }
            }
        }
        return max_count;
    }
};