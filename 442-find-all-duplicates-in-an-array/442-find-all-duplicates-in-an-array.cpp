class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int>m;
        vector<int>res;
        if(nums.empty())return {};
        for(int x:nums)
        {
            m[x]++;
        }
        for(auto it:m)
        {
            if(it.second==2)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};