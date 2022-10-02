class Solution {
public:
    
    /*
    [1,2,3,4,5,6,1]  and k=3
    
    123      ___
    12         1
    1        6,1
    ___    5,6,1
    */
    int maxScore(vector<int>& cardPoints, int k)
    {
        int res=0;
        for(int i=0;i<k;i++)
        {
          res+=cardPoints[i];
        }
        //Now what we need to do is to remove the last visited element and include the last element from the end  of the array
        int currSum=res;
        for(int i=k-1;i>=0;i--)
        {
            currSum-=cardPoints[i];
            currSum+=cardPoints[cardPoints.size()-k+i];
            
            res=max(res,currSum);
        }
        
        return res;
    }
};