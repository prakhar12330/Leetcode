class MyHashSet {
public:
    
    //defining the structure for the Linked List node
    struct LL
    {
        int val;
        LL* next;
        LL():val(0),next(NULL){}
        LL(int x):val(x),next(NULL){}
        LL(int x,LL* next):val(0),next(next){}
    };
    //head LL node
    LL* head;
    MyHashSet()
    {
        head=new LL(-1);
    }
    
    void add(int key)
    {
        LL* temp=new LL(key);
        LL* curr=head;
        while(curr and curr->next)
        {
            if(curr->next->val==key)return;
            curr=curr->next;
        }
        curr->next=temp;
    }
    
    void remove(int key)
    {
        LL* curr=head;
        while(curr and curr->next)
        {
            if(curr->next->val==key)
            {
                curr->next=curr->next->next;
            }
            curr=curr->next;
        }
    }
    
    bool contains(int key)
    {
        LL* curr=head;
        while(curr)
        {
            if(curr->val==key)
            {
                return true;
            }
            curr=curr->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */