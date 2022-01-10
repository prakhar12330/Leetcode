class Solution {
public:
    int countBinarySubstrings(string s) {
        int currstrcnt=1;
        int prevstrcnt=0;
        int rst=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
               currstrcnt++; 
            }
            else
            {
                rst+=min(currstrcnt,prevstrcnt);
                prevstrcnt=currstrcnt;
                currstrcnt=1;
                
            }
        }
        rst+=min(currstrcnt,prevstrcnt);
        return rst;
        
    }
};