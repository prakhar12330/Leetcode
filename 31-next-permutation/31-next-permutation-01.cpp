class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int first;
        for( first=nums.size()-2;first >=0;first--)
        {
            if(nums[first]<nums[first+1])
            {
                break;
            }
        }
        if(first<0)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            int second=nums.size()-1;
            while(second>first)
            {
                if(nums[second]>nums[first])
                {
                    break;
                }
                second--;
            }
            swap(nums[second],nums[first]);
            reverse(nums.begin()+first+1,nums.end());
        }    
    }
};
