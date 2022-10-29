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
        vector<int>temp;
        ListNode* z=head;
        while(z!=nullptr)
        {
            temp.push_back(z->val);
            z=z->next;
        }
        int n=temp.size();
        int L=0;
        int R=n-1;
        for(int i=0;i<n;i++,head=head->next)
        {
            if((i+1)%2==0)
            {
                                
             head->val=temp[R--];
            }
            else
            {
               head->val=temp[L++];
            }
        }
        
    }
};