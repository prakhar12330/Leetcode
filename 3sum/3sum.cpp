class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        //sorting the vector elements //
        sort(nums.begin(),nums.end());
        // vector of vectors //
        vector<vector<int>> result;
        // for transversing through each vector elements and checking for it //
        for(int i=0;i<nums.size();i++)
        {
            if( i>0 && nums[i]==nums[i-1]) /// to skip the duplicates in the vector //
            {
                continue;
            }
            int front=i+1; /// front pointer          
            int back=nums.size()-1;// back p[ointer 
            /// used both of them to find the other two numbers to form the trio which together sums to zero //
            //while loop start//          
            while(front < back)
            {
                int sum=nums[i]+nums[front]+nums[back];
                if(sum>0)
                {
                    back--;
                }
                else if (sum<0)
                {
                    front++;
                }
                else
                {
                    result.push_back(vector<int>                       {nums[i],nums[front],nums[back]}); ///pushing the pairs by storing in the vector ///
                    while(front<back && nums[front]==nums[front+1])
                    {
                        front++;  // skipping the duplicates//
                    }
                    while(front<back && nums[back]==nums[back-1])
                    {
                       back--;     // skipping the duplicates //
                    }
                    front++;
                    back--;
                }    
            }
            //while loop ends//  
            
            
        }
        return result;
    }
};