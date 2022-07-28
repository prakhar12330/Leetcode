class Solution {
public:
    bool isAnagram(string s, string t)
    {
        //Edge Case
        //if the size of both the array are not the same then directrly return false;
        if(s.size()!=t.size())return false;
        int count[26]={0};
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (count[i]) return false;
        return true;
        
        
    }
};