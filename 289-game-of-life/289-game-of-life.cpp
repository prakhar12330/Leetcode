class Solution {
public:
    
    int alive(int i,int j,vector<vector<int>>& board)
    {
          int count=0;
          int arrx[8]={-1,-1,-1,0,0,1,1,1};
          int arry[8]={-1,0,1,-1,1,-1,0,1};
          for(int x=0;x<8;x++)
          {
             if(i+arrx[x]>=0 &&j+arry[x]>=0 &&  i+arrx[x]<board.size() && j+arry[x]<board[0].size())
             {
             if(board[i+arrx[x]][j+arry[x]]==1)count++;
             }
          }
          return count;
    }
    void gameOfLife(vector<vector<int>>& board)
    {
        vector<vector<int>>temp;
        temp=board;
        int row=board.size();
        int col=board[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int neighbourAlive=alive(i,j,board);
                if(board[i][j]==1 && neighbourAlive<2)
                {
                   temp[i][j]=0;
                }
                if(board[i][j]==1 && (neighbourAlive==2||neighbourAlive==3))
                {
                   temp[i][j]=1;
                }
                if(board[i][j]==1 && neighbourAlive>3)
                {
                   temp[i][j]=0;
                }
                if(board[i][j]==0 && neighbourAlive==3)
                {
                   temp[i][j]=1;
                }
            }
        }
        board=temp;
        
    }
};