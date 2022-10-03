class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int>m;
        vector<int>res;
        for(int x:nums)
        {
            m[x]++;
        }
        for(int i=0;i<m.size();i++)
        {
            if(m[i]>=2)
            {
                res.push_back(i);
            }
        }
        
        return res;
    }
};