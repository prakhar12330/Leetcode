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
    ListNode* oddEvenList(ListNode* head)
    {
        ListNode* odd=new ListNode(-1);
        ListNode* even=new ListNode(-1);
        ListNode* odd_head=odd;
        ListNode* even_head=even;
        int idx=1;
        while(head)
        {
            if((idx)%2==0)
            {
                even->next=head;
                even=even->next;
                head=head->next;
                even->next=NULL;
            }
            else
            {
                odd->next=head;
                odd=odd->next;
                head=head->next;
                odd->next=NULL;
            }
            
            idx++;
        }
        odd->next=even_head->next;
        
        return odd_head->next;
    }
};