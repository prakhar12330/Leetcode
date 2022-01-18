class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        /// s--> "egg"        /// s-->"foo"
        /// t--> "add"        /// t-->"bar"
        char see[256]={};
        
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            if(!see[c])
            {
                //yaha hme check krna hai ki naye eleement ko hum string t ki jis bhi value se map kre wo kisi ar se                       mapped nhi hui honi chaiye pehle se //
                for (char k: see) if (k == t[i]) return false;
                see[c]=t[i];
            }
            else if(see[c]!=t[i]) // agar string s ka element already present hai ar uski mapped value same nhi hai //
            {
                return false;
            }
        }
        return true;
    }
};