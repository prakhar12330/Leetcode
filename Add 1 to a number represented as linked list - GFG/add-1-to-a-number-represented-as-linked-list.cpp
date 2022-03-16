// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
    Node* reverseLL(Node* head)
    {
        Node* prv=NULL;
        Node* nxt=NULL;
        Node* crnt=head;
        while(crnt!=NULL)
        {
            nxt=crnt->next;
            crnt->next=prv;
            prv=crnt;
            crnt=nxt;
        }
        return prv;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* new_head=reverseLL(head);
        Node* prv=NULL;
        Node* crnt=new_head;
        Node* crnt1=new_head;
        
        int crry=0;
        while(crnt!=NULL)
        {
            int sum=0;
            if(prv==NULL)
            {
                sum=crnt->data+1;
            }
            else
            {
                sum=crnt->data+crry;
            }
            crry=sum/10;
            crnt->data=sum%10;
            prv=crnt;
            crnt=crnt->next;
        }
        if(crry)
        {
            Node* new_node=new Node(crry);
            prv->next=new_node;
        }
        return reverseLL(crnt1);
        
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends