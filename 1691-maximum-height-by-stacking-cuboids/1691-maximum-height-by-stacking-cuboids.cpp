class Solution {
public:
    
    bool check(vector<int>base,vector<int>newBox)
    {
        if(newBox[0]<=base[0] && newBox[1]<=base[1]  && newBox[2]<=base[2] )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int solveTab(vector<vector<int>> & nums)
      {
        int n=nums.size();
        vector<int>curr(n+1,0);
        vector<int>next(n+1,0);
        
         for(int currInsertedIdx=n-1;currInsertedIdx>=0;currInsertedIdx--)
         {
             for(int lastInsertedIdx=currInsertedIdx-1;lastInsertedIdx>=-1;lastInsertedIdx--)
             {
                int include=0;
                if(lastInsertedIdx==-1 || check(nums[currInsertedIdx],nums[lastInsertedIdx]))
                {
                 include=nums[currInsertedIdx][2]+next[currInsertedIdx+1];
                }  
                int exclude=0+next[lastInsertedIdx+1];
        
                curr[lastInsertedIdx+1]= max(include,exclude);
             }
             next=curr;
         }
         return next[0];
        
     }
    int maxHeight(vector<vector<int>>& cuboids)
    {
       //Step01-->Sort all the dimensions of every cuboids
       for(auto &a:cuboids)
       {
           sort(a.begin(),a.end());
       }
       //Step02-->Sort all cuboids on the basis of width or length
       sort(cuboids.begin(),cuboids.end());
        //Step03-->Use LIS Logic
        return solveTab(cuboids);
    }
};