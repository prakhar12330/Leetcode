class Solution {
public:
    int balancedStringSplit(string s)
    {
      int anscount=0;
        int count0=0;
        int count1=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='R')
           {
               count0++;
           }
           else 
           {
               count1++;
           }
           if(count0==count1)
           {
               
               anscount++;
               count0=0;
               count1=0;
           }
            
        }
        return anscount;  
    }
};