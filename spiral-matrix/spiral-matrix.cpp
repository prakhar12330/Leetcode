class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> rst;
        int l=0;
        int k=0;
        int lastrow=m-1;
        int lastcol=n-1;
        while(k<=lastrow and l<=lastcol)
        {
            for(int i=l;i<=lastcol;i++)
            {
                rst.push_back(matrix[k][i]);
            }
            k++;
            for(int i=k;i<=lastrow;i++)
            {
                rst.push_back(matrix[i][lastcol]);
            }
            lastcol--;
            if(k<=lastrow)
            {
             for(int i=lastcol;i>=l;i--)
             {
                rst.push_back(matrix[lastrow][i]);
             }
                lastrow--;
            }
            if(l<=lastcol)
            {
             for(int i=lastrow;i>=k;i--)
             {
                rst.push_back(matrix[i][l]);
             }
                l++;
            }

        }
        return rst;
    }
};