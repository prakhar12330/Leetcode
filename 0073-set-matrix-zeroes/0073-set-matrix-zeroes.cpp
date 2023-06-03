class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        vector<int>colflag(matrix[0].size(),1);
        vector<int>rowflag(matrix.size(),1);
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    colflag[j]=-1;
                    rowflag[i]=-1;
                }
            }
        }
         
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(colflag[j]==-1 or rowflag[i]==-1)
                {
                    matrix[i][j]=0;
                }
            }
        }
        
        
    }
};