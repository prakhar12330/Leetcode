class Solution {
public:
    // this function will check whether a particular character is alphanumeric or not //
    bool isAlphaNum(char c) 
    {
        if(c>=65 && c<=90 || c>=97 && c<=122 || c>=48 && c<=57  )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // this function will convert uppercase into lowercase //
    char isLowercase(char c)
    {
         if(c>=65 && c<=90)
         {
             return c+32;
         }
        else
        {
            return c;
        }
    }
    bool isPalindrome(string s)
    {
        int i=0;
        int j=s.size();
        for(i,j;i<j;i++,j--)
        {
            while(!isAlphaNum(s[i]) && i<j)
            {
               i++; 
            }
            while(!isAlphaNum(s[j]) && i<j)
            {
               j--; 
            }
            if(isLowercase(s[i])!=isLowercase(s[j]))
            {
                return false;
            }
        }
        return true;
    }
};