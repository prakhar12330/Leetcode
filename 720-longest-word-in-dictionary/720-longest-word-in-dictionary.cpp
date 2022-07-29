class TrieNode
{
    public:
    TrieNode* children[26];
    bool isEnd=false;    
};
class Solution {
public:
    string ans="";
    
    void insert(TrieNode* root,string w)
    {
        string s="";//Store the current word only if it's prefix is present
        int n=w.size();
        TrieNode *curr=root;
        for(int i=0;i<n;i++)
        {
          if(i==n-1)s+=w[i]; //stores the first char or the last char in the temporary string s
          int idx=w[i]-'a';
          if(curr->children[idx]==NULL)
          {
              if(i!=n-1)break;
              curr->children[idx]=new TrieNode();
          }
          else
          {
              s+=w[i];
              curr=curr->children[idx];
          }
        }  
        if(s.length()>ans.length())ans=s; //if cur string s length > ans then update ans
        else if(s.length()==ans.length() && s<ans)ans=s; //if both lengths are same 
		//check for lexigraphical order and update accordingly
        curr->isEnd=true;
    }
    string longestWord(vector<string>& words)
    {
       //words = ["w","wo","wor","worl","world"]
        if(words.size()==1)return words[0];//agar array of string me sirf ek hi string hai to bs usse hi return krdo
        //agar array of strings me 2 words consecutive hai to ussspe insert function nhi call krna hai
        TrieNode* root=new TrieNode();
        sort(begin(words),end(words));
        for(int i=0;i<words.size();i++)
        {
            if(i+1<words.size() && words[i]==words[i+1])continue;
            insert(root,words[i]);
        }
        return ans;
    }
};