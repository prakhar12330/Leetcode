class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time)
    {
        vector<int>arr(60,0);
        int count=0;
        for(int i=0;i<time.size();i++)
        {
            if(time[i]%60==0)
            {
                count+=arr[0];
            }
            else
            {
                count+=arr[60-(time[i]%60)];
            }
            arr[time[i]%60]++;
        }
        return count;
    }
};