class Solution {
public:
    string longestPalindrome(string s)
    {
       int n=s.size();
       int start=0; // to keep the track of the start of the substring//
       int end=0;   // to keep the track of the end of the substring//
       //If we are assuming that the output substring wil be even one//
       int maxlen=1;
        for(int i=0;i<n-1;i++)
        {
            int lft=i;
            int rgt=i+1;
         while(lft>=0 and rgt<n)
         {
            if(s[lft]==s[rgt])
            {
                lft--;
                rgt++;
               
            }
            else
            {
                break;
            }
            
         }
            int len=rgt-lft-1;
            if(len>maxlen)
            {
                maxlen=len;
                start=lft+1;
                end=rgt-1;
            }
        }
        //If we are assuming that the output substring wil be even one//
        for(int i=0;i<n-1;i++)
        {
            int lft=i;
            int rgt=i;
         while(lft>=0 and rgt<n)
         {
            if(s[lft]==s[rgt])
            {
                lft--;
                rgt++;
               
            }
            else
            {
                break;
            }
            
         }
            int len=rgt-lft-1;
            if(len>maxlen)
            {
                maxlen=len;
                start=lft+1;
                end=rgt-1;
            }
        }
        string rst=s.substr(start,maxlen);
        return rst;
        
            
    }
};