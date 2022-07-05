class Solution {
public:
    int longestValidParentheses(string S)
    {
        int n=S.size();
        stack<int>s;
        s.push(-1);
        int maxL=0;
        for(int i=0;i<n;i++)
        {
            if(s.top()!=-1 && S[i]==')'&& S[s.top()]=='(')
                
            {
                s.pop();
                maxL=max(maxL,i-s.top());
            }
            else
            {
                s.push(i);
            }
        }
        return maxL;
    }
};