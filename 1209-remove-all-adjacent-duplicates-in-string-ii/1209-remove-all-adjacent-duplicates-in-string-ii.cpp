class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        stack<pair<char,int>>stk;
        string res="";
        for(int i=0;i<s.size();i++)
        {
            if(stk.empty())
            {
               stk.push({s[i],1});
            }
            else
            {
                if(stk.top().first==s[i])
                {
                 stk.top().second++;
                }
                else
                {
                    stk.push({s[i],1});
                }
            }
            if(!stk.empty() and stk.top().second==k)
            {
                stk.pop();
            }
        }
        
        while(!stk.empty())
        {
            res+=string(stk.top().second,stk.top().first);
            stk.pop();
        }
        reverse(res.begin(),res.end());
        
        return res;
        
    }
};