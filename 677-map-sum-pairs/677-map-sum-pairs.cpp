class TrieNode
{
    public:
    TrieNode* child[26];
    int score=0;
};
class MapSum {
public:
    int res=0;
    MapSum()
    {
        root=new TrieNode();
    }
    
    void insert(string key, int val)
    {
        TrieNode* curr = root;
        for(char c : key) {
            if(!curr->child[c-'a']) {
                curr->child[c-'a'] = new TrieNode();
            }
            curr = curr->child[c-'a'];
        }
        curr->score = val;
    }
    
    int sum(string prefix) 
    {
        res = 0;
        TrieNode* curr = root;
        for(char c : prefix) {
            if(!curr->child[c-'a']) 
                return 0;
            curr = curr->child[c-'a'];
        }
        helper(curr);
        return res;
    }
    void helper(TrieNode* curr) {
        res += curr->score;
        for (int i = 0; i < 26; i++) {
            if (curr->child[i]) {
                helper(curr->child[i]);
            }
        }
    }
    private:
    TrieNode* root;
    
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */