class Solution {
public:
    
    
    void reverseFunc(vector<char>& s,int i,int k)
    {
        if(i>k)return;
        
        swap(s[i],s[k]);
        
        reverseFunc(s,i+1,k-1);
    }
    void reverseString(vector<char>& s)
    {
        reverseFunc(s,0,s.size()-1);
    }
};