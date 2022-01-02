class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k)
    {
        int m=matrix.size();
        int n=matrix[0].size();
        int lo=matrix[0][0];
        int hi=matrix[m-1][n-1];
        while(lo<hi)
        {
            int mid=lo+(hi-lo)/2;
            int count=0;
            for(int row=0;row<m;row++)
            {
                count+=upper_bound(matrix[row].begin(),matrix[row].end(),mid)-matrix[row].begin();
            }
            if(count<k)
            {
                lo=mid+1;
            }
            else
            {
                hi=mid;
            }
        }
        return lo;
    }
};