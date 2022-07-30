class TrieNode
{
    public:
    TrieNode* children[26];
    bool isEnd;
    
    TrieNode()
    {
        this->isEnd=false;
        for(int i=0;i<26;i++)
        {
            this->children[i]=NULL;
        }
    }
};
class Solution {
public:
    string check(string word)
    {
        TrieNode* curr=root;
        string s="";
        for(auto l:word)
        {
            if(curr->children[l-'a']==NULL)break;
            s+=l;
            curr=curr->children[l-'a'];
            if(curr->isEnd)return s;
        }
        return word;
    }
    
    void insert(string word)
    {
        TrieNode* curr=root;
        //Traversing over the word coming from the dictionary
        for(auto l:word)//Sending the single element from the word
        {
            if(curr->children[l-'a']==NULL)curr->children[l-'a']=new TrieNode();
            curr=curr->children[l-'a'];//moving the current pointer to the new node created
        }
        curr->isEnd=true;
    }
    string replaceWords(vector<string>& dictionary, string sentence)
    {
        root=new TrieNode();
        for(auto s :dictionary)
        {
            insert(s);//Sending a single word from the dictionary
        }
        istringstream ss(sentence);
        string word="";
        string ans="";
        for(;ss>>word;)
        {
            ans+=check(word);
            ans+=' ';
        }
        ans.pop_back();//Removing the empty space which will be added at the end
        return ans;
        
    }
    
 private:
    TrieNode* root;
};