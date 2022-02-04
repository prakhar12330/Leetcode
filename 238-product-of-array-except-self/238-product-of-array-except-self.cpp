class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        /*
        Test Case:  -1  1  0 -3 3
            left->  -1 -1  0  0 0
            right->  0  0  0 -9 3
        */
        vector<int> ans;
        int right[nums.size()];
        int rgtmult=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            rgtmult*=nums[i];
            right[i]=rgtmult;
        }
        int lftmult=1;
        for(int j=0;j<nums.size()-1;j++)
        {
            
            ans.push_back(lftmult*right[j+1]);
            lftmult*=nums[j];
        }
        ans.push_back(lftmult);
        return ans;
    }
};