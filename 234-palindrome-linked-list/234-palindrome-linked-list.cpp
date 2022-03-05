/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseR_LL(ListNode* head)
    {
        ListNode*p=head;
        ListNode*q=NULL;
        ListNode*r=NULL;
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            
        }
        head=q;
        return head;
    }
    bool isPalindrome(ListNode* head)
    {
        //If the given ll's head is not pointing towards any of the node then simply return false//
        if(head==NULL or head->next==NULL)
        {
          return true;  
        }
        //Now we would be requiring a slow and a fast pointer to use them in finding the middle element of the given ll//
        ListNode* slow=head;
        ListNode* fast=head;
       //Finding The middle Element of the given linked list //
        while(fast->next and fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //After performing this the slow pointer would be pointing on the middle element of the LL //
        //We will be tying to reverse the Right-half of the LL//
        slow->next=reverseR_LL(slow->next);
        slow=slow->next;
        
        while(slow!=NULL)
        {
            if(head->val !=slow->val)return false;
            slow=slow->next;
            head=head->next;
            
        }
        return true;
        
        
    }
};