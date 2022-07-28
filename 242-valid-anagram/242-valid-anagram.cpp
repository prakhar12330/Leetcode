class Solution {
public:
    bool isAnagram(string s, string t)
    {
        //Edge Case
        //if the size of both the array are not the same then directrly return false;
        if(s.size()!=t.size())return false;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(auto count:mp)
        {
            if(count.second)return false;
        }
        return true;
        
        
    }
};