// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    if(s.size()%2!=0)return -1;
    
    int open=0;
    int close=0;
    int rst=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{')
        {
            open++;
        }
        else
        {
            if(open==0)close++;
            else open--;
        }
    }
    rst=ceil(open/2.0)+ceil(close/2.0);
    return rst;
}