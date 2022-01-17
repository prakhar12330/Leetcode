class Solution {
public:
    
    bool isValid(string &str)
    {

	if(str.length()>3)

		return false;

	if(str.front()=='0' and str.length()>1)

		return false;

	int val=stoi(str);

	return val>=0 and val<=255;

    }
    vector<string> restoreIpAddresses(string s)
    {
        vector<string>rst;
        for(int i=1;i<=3 and i<s.length();i++)
        {
            string first=s.substr(0,i);
            if(isValid(first))
            {
                for(int j=1;j<=3 and i+j<s.length();j++)
                {
                    string second=s.substr(i,j);
                        if(isValid(second))
                        {
                            for(int k=1;k<=3 and i+j+k<s.length();k++)
                            {
                                string third=s.substr(i+j,k);
                                string fourth=s.substr(i+j+k);
                                if(isValid(third) and isValid(fourth))

						         {

							         rst.emplace_back(first+"."+second+"."+third+"."+fourth);

						          }
                                
                                
                            }
                        }
                }
            }
        }
        return rst;
    }
};