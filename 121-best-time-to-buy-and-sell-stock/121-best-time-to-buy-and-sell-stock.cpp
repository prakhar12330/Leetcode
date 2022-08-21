class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        //Initially we consider that the profit is zero and minimum is arr[0]
        int mini=prices[0]; //mini will keep track of the day with minimum price among the days which are present before the day on which the stock is sold
        int profit=0;//profit will keep the track of the profits
        
        for(int i=1;i<prices.size();i++)
        {
           int diff=prices[i]-mini;
           profit=max(profit,diff);
           mini=min(mini,prices[i]);
        }  
        
        return profit;
    }
};