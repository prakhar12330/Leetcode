//Bottom Up Approach
class Solution {
public:
    
    int solveTab(vector<int>& slices)
    {
        int k=slices.size();
        vector<int>prev1(k+2,0);
        vector<int>curr1(k+2,0);
        vector<int>next1(k+2,0);
        
        vector<int>prev2(k+2,0);
        vector<int>curr2(k+2,0);
        vector<int>next2(k+2,0);
        
        
        for(int idx=k-2;idx>=0;idx--)
        {
            for(int myLimit=1;myLimit<=k/3;myLimit++)
            {
              int take=slices[idx]+next1[myLimit-1];
              int leave=0+curr1[myLimit];
              prev1[myLimit]=max(take,leave); 
            }
            next1=curr1;
            curr1=prev1;
        }
        int case01=curr1[k/3];
        
        for(int idx=k-1;idx>=1;idx--)
        {
            for(int myLimit=1;myLimit<=k/3;myLimit++)
            {
              int take=slices[idx]+next2[myLimit-1];
              int leave=0+curr2[myLimit];
              prev2[myLimit]=max(take,leave); 
            }
             next2=curr2;
             curr2=prev2;
        }
        int case02=curr2[k/3];
        
        return max(case01,case02);
    }
    int maxSizeSlices(vector<int>& slices)
    {

        int includeone=solveTab(slices); 
        int excludeone=solveTab(slices);
        return max(includeone,excludeone);
    }
};