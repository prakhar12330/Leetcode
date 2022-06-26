// Space Optimization
class Solution {
public:
    int fib(int n)
    {
        if(n<2)return n;
        int prev01=0;
        int prev02=1;
        for(int i=2;i<n+1;i++)
        {
            int curr=prev01+prev02;
            prev01=prev02;
            prev02=curr;
        }
        return prev02;  
    }
};