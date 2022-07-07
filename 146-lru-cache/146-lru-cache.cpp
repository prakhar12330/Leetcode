class LRUCache {
public:
    //structure of the DLL
    class Node
    {
        public:
        int key;
        int val;
        Node* next;
        Node*prev;
        Node(int _key,int _val)
        {
            key=_key;
            val=_val;
        }
    };
    
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    int cap;
    map<int,Node*>m;
    
    void addnode(Node* newNode)
    {
        Node* temp=head->next;
        newNode->next=temp;
        newNode->prev=head;
        
        head->next=newNode;
        temp->prev=newNode;
    }
    void delenode(Node* delNode)
    {
        Node* deletedNodePrev=delNode->prev;
        Node* deletedNodeNext=delNode->next;
        
        deletedNodePrev->next=deletedNodeNext;
        deletedNodeNext->prev=deletedNodePrev;
    }
    
    
    LRUCache(int capacity)
    {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key_)
    {
        if(m.find(key_) != m.end())
        {
            Node* takeKeyAdd=m[key_];
            int takeKeyValue=takeKeyAdd->val;
            m.erase(key_);
            delenode(takeKeyAdd);
            addnode(takeKeyAdd);
            m[key_]=head->next;
            return takeKeyValue;
        }
        return -1;
    }
    
    void put(int key_, int value)
    {
       if(m.find(key_)!= m.end())
       {
           Node* takeExistingKeyAdd=m[key_];
           m.erase(key_);
           delenode(takeExistingKeyAdd);
       }
         else  if(m.size()==cap)
           {
            m.erase(tail -> prev -> key);
             delenode(tail -> prev);
            }
           addnode(new Node(key_, value));
           m[key_] = head -> next;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */