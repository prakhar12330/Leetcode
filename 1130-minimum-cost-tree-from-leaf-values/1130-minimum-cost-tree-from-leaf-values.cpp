class Solution {
public:
    
    int solveMem(vector<int>& arr,map<pair<int,int>,int>&maxVal,int left,int right,vector<vector<int>>&dp)
    {
        //Base Case-->agar left right ke equal hai to hmara leaf node hai
        if(left==right)return 0;
        
        //Step03-->
        if(dp[left][right]!=-1)return dp[left][right];
        
        int ans=INT_MAX;
        for(int i=left;i<right;i++)
        {
                    ans=min(ans,maxVal[{left,i}]*maxVal[{i+1,right}]+solveMem(arr,maxVal,left,i,dp)+solveMem(arr,maxVal,i+1,right,dp));
        }
        
        //Step02-->
        dp[left][right]=ans;
        return dp[left][right];
    }
    int mctFromLeafValues(vector<int>& arr)
    {
      /*
      Finding The Max. Values In Every Possible Index Ranges of given array-->
      eg-   arr=[6,2,4]
          index= 0 1 2
      
       Index Ranges  --> Max. Values in the Range
      {Idx 0-Idx 0}  --> 6
      {Idx 0-Idx 1}  --> 6
      {Idx 0-Idx 2}  --> 6
      {Idx 1-Idx 1}  --> 2
      {Idx 1-Idx 2}  --> 4
      {Idx 2-Idx 2}  --> 4
      */
      
      map<pair<int,int>,int>maxVal;
      for(int i=0;i<arr.size();i++)
      {
          maxVal[{i,i}]=arr[i];
          for(int j=i+1;j<arr.size();j++)
          {
              maxVal[{i,j}]=max(arr[j],maxVal[{i,j-1}]);
          }
      }
    int n=arr.size();
    
     //Step01-->
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
      //Calling and returning the recursive function
      return solveMem(arr,maxVal,0,arr.size()-1,dp);
    }
};