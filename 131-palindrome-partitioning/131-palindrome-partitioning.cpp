class Solution {
public:
    
    void func(int idx,string s,vector<string> &prtt,vector<vector<string>> &ans)
    {
        if(idx==s.size())
        {
            ans.push_back(prtt);
            return;
        }
        
        for(int i=idx;i<s.size();i++)
        {
            if(isPalindrome(s,idx,i))
            {
               prtt.push_back(s.substr(idx,i-idx+1));
               func(i+1,s,prtt,ans);
               prtt.pop_back();
            }
            
        }
      }
    
    bool isPalindrome(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
        
    }
    
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>>ans;
        vector<string> prtt;
        func(0,s,prtt,ans);
        return ans;
    }
};