class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        int n=nums.size();
        vector<int>result(n);
        stack<int>s;
        for(int i=2*n-1;i>=0;i--)
        {
            while(!s.empty() && nums[i%n]>=s.top())
            {
                s.pop();
            }
            if(i<n)
            {
                if(!s.empty())
                {
                    result[i]=s.top();
                }
                else
                {
                    result[i]=-1;
                } 
                
            }
            s.push(nums[i%n]);
        }
        return result;
    }
};