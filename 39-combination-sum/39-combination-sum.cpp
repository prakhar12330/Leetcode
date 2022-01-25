class Solution {
public:
    
    void formCombination(int idx,vector<int>& candidates,int target, vector<int>&ds,vector<vector<int>> &ans)
    {
       //Base Case
        if(idx>=candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        //picking condition
        if(target>=candidates[idx])
        {
        ds.push_back(candidates[idx]);
        formCombination(idx,candidates,target-candidates[idx],ds,ans);
        ds.pop_back();
        }
        //not picking condition
        formCombination(idx+1,candidates,target,ds,ans);
       
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>>rst;
        vector<int>ds;
        formCombination(0,candidates,target,ds,rst);
        return rst;
    }
};