class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
       /*****  strs = ["flower","flow","flight"]  *****/
        string rst;               
        for(int i=0;i<strs[0].size();i++)
           
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i])
                {
                  return rst;
                }
                
                    
            }
            rst.push_back(strs[0][i]);
        }
        
       return rst; 
    }
};