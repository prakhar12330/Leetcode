class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        int carry=0;
        digits[n-1]+=1;
        carry=digits[n-1]/10;
        digits[n-1]=digits[n-1]%10;
        
        for(int j=n-2;j>=0;j--)
        {
          if(carry==1)
          {
              digits[j]+=1;
              carry=digits[j]/10;
              digits[j]=digits[j]%10;
          }
        }
        if(carry==1)
        {
            digits.insert(digits.begin(),1);
        }
         return digits;
    }
    
};