class Solution {
public:
    int findMin(vector<int>& nums)
    {
         int lo=0;
         int hi=nums.size()-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(nums[lo]<=nums[hi])
            {
                return nums[0];
            }
            else if(nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }
            else if(nums[mid]<nums[mid-1])
            {
                return nums[mid];
            } 
            else if(nums[lo]<=nums[mid])
            {
                lo=mid+1;
            }
            else //if(nums[hi]>=nums[mid])
            {
                hi=mid-1;
            }
        }
        return -1;
    }
};