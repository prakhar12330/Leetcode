class Solution {
public:
    
    /*
     -Find the sum of the complete array 
     -Now Traverse the array 
       ~Kepp finding the left sum
       ~sum-leftsum-currElement will give you the right sum for every element
    */
    int pivotIndex(vector<int>& nums)
    {
        int arraySum=0;
        int leftSum=0;
        for(int x:nums)arraySum+=x;
        for(int i=0;i<nums.size();i++)
        {
            if(leftSum==arraySum-leftSum-nums[i])return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};