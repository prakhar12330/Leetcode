class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
    
        vector<vector<int>>rst;
        if(nums.empty())return rst;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int trgt=target-(nums[i]+nums[j]);
                int lo=j+1;
                int hi=nums.size()-1;
                while(lo<hi)
                {
                    
                    int sum=nums[lo]+nums[hi];
                    if(sum<trgt)lo++;
                    else if(trgt<sum) hi--;
                    else
                    {
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = nums[i];
                        quadruplet[1] = nums[j];
                        quadruplet[2] = nums[lo];
                        quadruplet[3] = nums[hi];
                        rst.push_back(quadruplet);
                        while(lo<hi && nums[lo]==quadruplet[2])lo++;
                        while(lo<hi && nums[hi]==quadruplet[3])hi--;
                    }
                    
                    
                }
                  while(j + 1 < nums.size() && nums[j + 1] == nums[j]) j++;  
                   
                    
                }
            while(i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
                
            }
            return rst;
        }
        
    
};