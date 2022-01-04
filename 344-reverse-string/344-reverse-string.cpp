class Solution {
public:
    void reverseString(vector<char>& s)
    {
        int i=0;
        int j=s.size()-1;
        for(i,j;i<j;i++,j--)
        {
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};