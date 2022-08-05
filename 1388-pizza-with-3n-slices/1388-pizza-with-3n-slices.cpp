//Top Down Approach
class Solution {
public:
    
    int solveMem(vector<int>& slices,int idx,int endIdx,int myLimit,vector<vector<int>>&dp)
    {
        //Base Case-->agar maine apni limit poori krli hai ya  humara  index pointer end index ke aage nikal gya hai
        if(myLimit==0 || idx>endIdx)
        {
            return 0;
        }
        if(dp[idx][myLimit]!=-1)
        {
            return dp[idx][myLimit];
        }
        
        int take=slices[idx]+solveMem(slices,idx+2,endIdx,myLimit-1,dp);
        int leave=0+solveMem(slices,idx+1,endIdx,myLimit,dp);
        dp[idx][myLimit]=max(take,leave);
        
        return dp[idx][myLimit];
    }
    int maxSizeSlices(vector<int>& slices)
    {
        int k=slices.size();//No. of Slices;
        vector<vector<int>>dp1(k,vector<int>(k,-1));
        int includeone=solveMem(slices,0,k-2,k/3,dp1);//Case when one is included ,also k/3 is the max. no. of slices i can eat 
        vector<vector<int>>dp2(k,vector<int>(k,-1));
        int excludeone=solveMem(slices,1,k-1,k/3,dp2);//Case when one is not included
        return max(includeone,excludeone);
    }
};