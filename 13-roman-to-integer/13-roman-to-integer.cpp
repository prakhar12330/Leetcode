class Solution {
public:
    
    int givevalue(char roman )
    {
        int rst;
       switch(roman)
       {
         case 'I':
               rst= 1;
               break;
         case 'V':
               rst= 5;
               break;
         case 'X':rst= 10;
               break;
         case 'L':rst= 50;
               break;
         case 'C':rst= 100;
               break;
         case 'D':rst= 500;
               break;
         case 'M':rst= 1000;
               break;
       } 
        return rst;
               
        
    }
    int romanToInt(string s)
    {
        int ans=0;
        int p=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(givevalue(s[i])>=p)
            {
                ans+=givevalue(s[i]);
            }
            else
            {
               ans-=givevalue(s[i]);
            }
            p=givevalue(s[i]);
        }
        return ans;
    }
};