class Solution {
public:
    int mySqrt(int x) 
    {
        long long l=0;
        long long h=x;
        long long mid,ans;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(mid*mid==x)return mid;
            else if(mid*mid<x)
            {
                l=mid+1;
                ans=mid;
            }
            else h=mid-1;
        }
        
        return ans;
    }
};