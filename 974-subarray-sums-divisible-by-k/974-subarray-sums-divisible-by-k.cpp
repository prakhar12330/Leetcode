class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
       unordered_map<int,int>m;
       m[0]++;
       int count=0;
       int prefixSum=0;
       for(int i=0;i<nums.size();i++)
       {
           prefixSum+=nums[i];
           int rmndr=prefixSum%k;
           if(rmndr<0)rmndr+=k;
           if(m.count(rmndr))count+=m[rmndr];
           m[rmndr]++;
       }
        
        return count;
    }                 
};