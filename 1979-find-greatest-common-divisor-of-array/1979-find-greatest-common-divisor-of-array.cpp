class Solution {
public:
    int findGCD(vector<int>& nums)
    {
        int _min=nums[0];
        int _max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            _min=min(_min,nums[i]);
            _max=max(_max,nums[i]);
        }
        int ans=1;
        for(int i=2;i<=_max;i++)
        {
            if(_max % i==0 && _min % i==0) ans=i;
            
        }
        return ans;
    }
};