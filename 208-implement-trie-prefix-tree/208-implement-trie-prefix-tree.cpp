class TrieNode
{
    public:
    TrieNode* children[26];
    bool isWordEnd;
    TrieNode()
    {
        isWordEnd=false;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        
    }   
};
class Trie {
public:
    Trie()
    {
        root=new TrieNode();
    }
    /** Inserts a word into the trie. */
    void insert(string word)
    {
        TrieNode* curr=root;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            if(curr->children[idx] == NULL)
            {
                curr->children[idx]=new TrieNode();
                
            }
            curr=curr->children[idx];
        } 
        curr->isWordEnd=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word)
    {
        TrieNode* curr=root;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            curr=curr->children[idx];
            if(curr== NULL)
            {
                return false;//not even reached at end of the word
            }
        }
        return curr->isWordEnd;//reached end of word, now isWordEnd will decide whether such word exists that end at this curr position
    }
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
       TrieNode* curr = root; 
        for(int i=0;i<prefix.size();i++)
        {
            int idx=prefix[i]-'a';
             curr=curr->children[idx];
             if(curr == NULL)
            {
                return false;//if not even reached till end of prefix, so false
            }
        }
        return true;
    }
    
    ~Trie(){                         //destructor: to free memory
        clear(root);
    }
    void clear(TrieNode* root)
    {
        for(int i = 0; i<26; i++)
        {
            if(root->children[i] != NULL)
            {
                clear(root->children[i]);
            }
        }
        
        delete root;
    }
private:
    TrieNode* root;//Good Practice to keep root node private
    
    
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */