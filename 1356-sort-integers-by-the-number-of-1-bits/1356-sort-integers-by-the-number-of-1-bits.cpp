class Solution {
public:
    static bool compare(const int &a ,const int &b )
    {
        int c1=__builtin_popcount(a);//c1 contains no.of set bits in a //
        int c2=__builtin_popcount(b);//c2 contains no.of set bits in b //
        if(c1==c2)
        {
            return a<b;
        }
        return c1<c2;
    }
    vector<int> sortByBits(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end(),compare);
        return arr;
        
    }
};
/*
__builtin_popcount() --> It is a function used to count the number of one's(set bit) in an integer


*/