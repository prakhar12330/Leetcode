class Solution {
public:
    
    //int di[]={-1,0,1,0};
    //int dj[]={0,1,0,-1};
    
    bool explore(vector<vector<char>>& board, string word,int i,int j,int si)
    {
        
        int di[]={-1,0,1,0};
        int dj[]={0,1,0,-1};
        if(si==word.size())return true;
        
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size())return false;
        if(word[si] != board[i][j])return false;
        char mychar=board[i][j];
        board[i][j]='@';
        bool rst;
        for(int d=0;d<4;d++)
        {
            rst=explore(board,word,i+di[d],j+dj[d],si+1);
            if(rst)
            {
                board[i][j]=mychar;
                return true;
            }
        }
        board[i][j]=mychar;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) 
    {
        int m=board.size();
        int n=board[0].size();
        bool rst1;
       
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                    rst1=explore(board,word,i,j,0);
                    if(rst1)return rst1;
                    
                }
            }
        }
        return false;
    }
};