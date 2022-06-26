//Space Optimization
class Solution {
public:
    
    int solve(vector<int>& cost,int n)
    {
        //Step01-Creation of dp array
        vector<int>dp(n+1);
        //Step02-base case analysis
        int prev01=cost[0];
        int prev02=cost[1];
        //Step03
        for(int i=2;i<n;i++)
        {
            int curr=cost[i]+min(prev01,prev02);
            prev01=prev02;
            prev02=curr;
        }
        
        return min(prev01,prev02);
        
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        int ans=solve(cost,n);
        return ans;
    }
        
};