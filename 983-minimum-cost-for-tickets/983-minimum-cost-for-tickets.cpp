//Bottom Up Approach
class Solution {
public:
    
    int mincostTickets(vector<int>& days, vector<int>& cost) 
    {
        //Step01
       vector<int>dp(days.size()+1,INT_MAX);
        //Steo02-analysing the base case
        dp[days.size()]=0;
        
        for(int k=days.size()-1;k>=0;k--)
        {
        int option1=cost[0]+dp[k+1];//1 day pass is taken
        
        int i;
        for(i=k;i<days.size() && days[i]<days[k]+7;i++);//7 day pass is taken
        int option2=cost[1]+dp[i];
        
        for(i=k;i<days.size() && days[i]<days[k]+30;i++);//30 day pass is taken
        int option3=cost[2]+dp[i];
        dp[k]=min(option1,min(option2,option3));
        }
        return dp[0]; 
    }
};