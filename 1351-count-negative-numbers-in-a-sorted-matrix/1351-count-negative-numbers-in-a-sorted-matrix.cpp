class Solution {
public:
    
    int countNegCol(vector<int>& row,int lo,int hi)
    {
        int n=row.size();
         while( lo < hi )
         {
            int mid = lo + ( hi - lo )/2;
            if( row[mid] >= 0 )
                lo = mid + 1;
            else
                hi = mid;
        }
        if( row[lo] < 0 )
            return (n - lo);
        return 0;
    }
    int countNegatives(vector<vector<int>>& grid)
    {
        int row=grid.size();
        int col=grid[0].size();
        int count=0;
        for(int i=0;i<row;i++)
        {
           count+=countNegCol(grid[i],0,col-1);
        }
        return count;
    }
};