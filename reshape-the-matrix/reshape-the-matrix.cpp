class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m=mat.size();// no. of rows in the input matrix //
        int n=mat[0].size();//no. of columns in the input matrix //
        vector<vector<int>> rst(r,vector<int>(c));
        if(m*n!=r*c)return mat; // if the matrix is not possible //
        int row=0;
        int col=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                rst[i][j]=mat[row][col];
                col++;
                if(col==n)
                {
                    row++;
                    col=0;
                }
                
                
            }
        }
        return rst;
        
       
       
    }
};