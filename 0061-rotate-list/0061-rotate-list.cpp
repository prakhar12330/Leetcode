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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(!head || !head->next)return head;
        //Step01-->try to find the length of the LL
        ListNode* temp=head;
        int len=1;
        while(temp->next)
        {
            len++;
            temp=temp->next;
        }
        //Step02--> Make LL a ring
        temp->next=head;
        temp=head;
        //Step03-->find one element before the new head
        for(int i=0;i<len-(k%len)-1;i++)
        {
            temp=temp->next;
        }
        head=temp->next;
        
        temp->next=NULL;
        
        return head;
    }
};