//Space Optimization Using Operation Number
class Solution {
public:
    
     int solveRecurr(int k, vector<int>& prices)
     {
        
         int n=prices.size();
         vector<int>curr(2*k+1,0);
         vector<int>next(2*k+1,0);
         for(int idx=n-1;idx>=0;idx--)
         {
             for(int operationNo=0;operationNo<2*k;operationNo++)
             {
                 int profit=0;
                if(operationNo%2==0)
                {
                  int buyKaro=-prices[idx]+next[operationNo+1];
                  int skipKaro=0+next[operationNo];
                  profit=max(buyKaro,skipKaro);
                 }
                else
                 {
                  int sellKaro=+prices[idx]+next[operationNo+1];
                  int skipKaro=0+next[operationNo];
                  profit=max(sellKaro,skipKaro);
                 }
          
              curr[operationNo]=profit;
             }
             next=curr;
         }
         
         return next[0];
    }
    int maxProfit(int k, vector<int>& prices)
    {
      
        return solveRecurr(k,prices);
    }
};