class NumArray {
public:
    vector<int>prefixSum;
    NumArray(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)prefixSum.push_back(nums[0]);
            else
            {
               prefixSum.push_back(nums[i]+prefixSum[i-1]);
            }
        }
    }
    
    int sumRange(int left, int right) 
    {
        if(left==0)return prefixSum[right];
        else
        {
            return prefixSum[right]-prefixSum[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */