class Solution {
public:
    
    int countPrimes(int n) 
    {
        int count=0;
        // if n is 0 or 1 return 0 // 
        if(n<=1)
        {
            return 0;
        }

        bool prime[n+1]; // boolean array named as prime //
        memset(prime,true,sizeof(prime)); //The memset() function in C++ copies a single character for a specified number of time //
        for(int i=2;i*i<n;i++) 
        {
            if(prime[i]==true)
            {
                for(int p=i*i;p<n;p += i)
                {
                    prime[p]=false; 
                }
            }
                
            
        }
        for(int j=2;j<n;j++)
        {
          if(prime[j])
          {
              count++;
          }
            
        }
        return count;
    }
        
     };