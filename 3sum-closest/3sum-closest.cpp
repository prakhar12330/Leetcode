class Solution {
public: // access specifier //
    int threeSumClosest(vector<int>& nums, int target) // method/// 
    {
        if(nums.size()<3)  //returning 0 if there are less than three elements in the vector//
        {
            return 0;
        }
        int closet=nums[0]+nums[1]+nums[2]; // initially taking the closet sum //
        sort(nums.begin(),nums.end());
        /// sorting the vector given //
        for(int first=0;first<nums.size()-2;first++)// loop for transversing throughout the vector //
        {
            if(first>0 && nums[first]==nums[first-1])
            {
                continue;  // skipping the duplicates of the vector //
            }
            int second=first+1; // second pointer
            int third=nums.size()-1; // third pointer
            // while loop starts //
            while(second<third)
            {
                int currSum=nums[first]+nums[second]+nums[third];// calculating the current sum //
                /// comparison of the current sum //
                if(currSum==target)
                {
                    return currSum;
                }
                else if(abs(target-currSum)<abs(target-closet))
                {
                    closet=currSum;
                }
                else if(currSum<target) //in order to keep the iteration going on //
                {
                    second++;
                }
                else if(currSum>target)
                {
                    third--;
                }
                
            }
            // while loop ends//
        }
        return closet;
    }
};