//Bottom Up Approach
class Solution {
public:
    
    int solveTab(vector<int>& slices)
    {
        int k=slices.size();
        vector<vector<int>>dp1(k+2,vector<int>(k+2,0));
        vector<vector<int>>dp2(k+2,vector<int>(k+2,0));
        
        
        for(int idx=k-2;idx>=0;idx--)
        {
            for(int myLimit=1;myLimit<=k/3;myLimit++)
            {
              int take=slices[idx]+dp1[idx+2][myLimit-1];
              int leave=0+dp1[idx+1][myLimit];
              dp1[idx][myLimit]=max(take,leave); 
            }
        }
        int case01=dp1[0][k/3];
        
        for(int idx=k-1;idx>=1;idx--)
        {
            for(int myLimit=1;myLimit<=k/3;myLimit++)
            {
              int take=slices[idx]+dp2[idx+2][myLimit-1];
              int leave=0+dp2[idx+1][myLimit];
              dp2[idx][myLimit]=max(take,leave); 
            }
        }
        int case02=dp2[1][k/3];
        
        return max(case01,case02);
    }
    int maxSizeSlices(vector<int>& slices)
    {

        int includeone=solveTab(slices); 
        int excludeone=solveTab(slices);
        return max(includeone,excludeone);
    }
};