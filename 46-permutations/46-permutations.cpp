class Solution {
public:
    
    void recursivePermu(vector<int>& nums,vector<vector<int>> &ans,vector<int> &ds,int freq[])
    {
        //base case
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                recursivePermu(nums,ans,ds,freq);
                freq[i]=0;
                ds.pop_back();
            }
            
        }
        
        
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int>ds;
        int frequency[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            frequency[i]=0;
        }
        recursivePermu(nums,ans,ds,frequency);
        return ans;
    }
};