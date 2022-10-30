class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmpr)
    {
        int len=tmpr.size();
        vector<int>res(len);
        
        
        stack<int>s;
        s.push(len-1);
        for(int i=len-2;i>=0;i--)
        {
            while(!s.empty()and tmpr[s.top()]<=tmpr[i])s.pop();
            if(!s.empty())res[i]=s.top()-i;
            s.push(i);
        }
        return res;
    }
};