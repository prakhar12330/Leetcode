/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root)
    {
      if(!root)return NULL;
        
      Node* currentPtr=root;
      while(currentPtr->left!=NULL) 
      {
          Node*temp=currentPtr;//We will use it to move forward 
          while(currentPtr!=NULL)
          {
              currentPtr->left->next=currentPtr->right;
              if(currentPtr->next!=NULL)currentPtr->right->next=currentPtr->next->left;
              else currentPtr->right->next=NULL;
              
              currentPtr=currentPtr->next;
             
          }
          currentPtr=temp->left;
      }
        
        
      return root;
        
    }
};