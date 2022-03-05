/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        // Whenever The Head Is Not Pointing to Any of the node//
        
        if(head==NULL or head->next == NULL)
        {
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next and fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)return true;
        }
        return false;
        
    }
};