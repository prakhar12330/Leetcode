class Solution {
public:
    string countAndSay(int n)
    {
       if(n==1)
       {
           return "1";
       }
        if(n==2)
        {
            return "11";
        }
       string s=countAndSay(n-1);
       int counter=0;
       string rst="";
       for(int i=0;i<s.size();i++)
       {
          counter++;
          if( i ==(s.size()-1) || s[i]!=s[i+1]  )
          {
              rst=rst+to_string(counter)+s[i];
              counter=0;
          }
       }
       return rst;
    }
};