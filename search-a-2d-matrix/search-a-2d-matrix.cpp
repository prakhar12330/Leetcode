class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int m=matrix.size();//No. of rows in the matrix 
        int n=matrix[0].size(); // No. of columns in the matrix 
            
        // (1).Searching the potential row //
        int lo=0;
        int hi=m-1;
        int potro=-1;
        while(lo<=hi)
        {
          int mid=(lo+hi)/2;
          if(matrix[mid][0]<=target && matrix[mid][n-1]>=target )
          {
             potro=mid;
             break;
          }
          else if(target>matrix[mid][0])
          {
              lo=mid+1;
          }
          else if(target<matrix[mid][0])
          {
              hi=mid-1;
          }
        }
        if(potro==-1)
        {
            return false;
        }
        // (2) Searching the target element in the potential row //
        int lo2=0;
        int hi2=n-1;
        int result=0;
        while(lo2<=hi2)
        {
            int mid2=(lo2+hi2)/2;
            if(matrix[potro][mid2]==target)
            {
               result=1;
               break;
               
            }
            else if(target>matrix[potro][mid2])
            {
              lo2=mid2+1;
            }
           else if(target<matrix[potro][mid2])
            {
              hi2=mid2-1;
            }
            
        }
        if(result==1)
        {
            return true;
        }
        else
        {
            return false;
        }

        
    }
};