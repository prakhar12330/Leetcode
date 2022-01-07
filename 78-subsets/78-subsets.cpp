class Solution {
public:
    vector<vector<int>>allsbst;
    void sbstGen(vector<int> &sbst,int i,vector<int>& nums)
    {
        if(i==nums.size())
        {
            allsbst.push_back(sbst);
            return;
        }
        sbstGen(sbst,i+1,nums);
        
        sbst.push_back(nums[i]);
        sbstGen(sbst,i+1,nums);
        sbst.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<int>empty;
        sbstGen(empty,0,nums);
        return allsbst;
        
    }
};