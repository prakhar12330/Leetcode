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
    void reorderList(ListNode* head) 
    {
        if (!head->next) return;
        //Step01:-Dividing the LL into half
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        slow->next=NULL;
        
        //Step02-Reverse the half of the LL
        ListNode* p=mid;
        ListNode* q=mid->next;
        ListNode* pp=NULL;
        ListNode* qq=NULL;
        
        mid->next=NULL;
        while(q)
        {
            pp=p;
            p=q;
            q=q->next;
            p->next=pp;
        }
        
        mid=p;
        
        // step 3: merge first half and reversed last half
        p = head;
        q = mid;
        while (q) {
            pp = p; qq = q;
            p = p->next; q = q->next;
            pp->next = qq; qq->next = p;
        }
    }
};