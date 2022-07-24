//Top Down Approach
class Solution {
public:
    
    int solveRecurr(vector<int>& days, vector<int>& cost,int idx,vector<int>& dp)
    {
       //Base Case
       if(idx>=days.size())return 0;//When idx pointer moves out of the array
        
         //Step03
        if(dp[idx]!=-1)return dp[idx];
        
        int option1=cost[0]+solveRecurr(days,cost,idx+1,dp);//1 day pass is taken
        
        int i;
        for(i=idx;i<days.size() && days[i]<days[idx]+7;i++);//7 day pass is taken
        int option2=cost[1]+solveRecurr(days,cost,i,dp);
        
        for(i=idx;i<days.size() && days[i]<days[idx]+30;i++);//30 day pass is taken
        int option3=cost[2]+solveRecurr(days,cost,i,dp);
        
        //Step02
        dp[idx]=min(option1,min(option2,option3));
        return dp[idx];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        //Step01
       vector<int>dp(days.size()+1,-1);
       return solveRecurr(days,costs,0,dp); 
    }
};