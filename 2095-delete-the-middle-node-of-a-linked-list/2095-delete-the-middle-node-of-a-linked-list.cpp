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
    ListNode*mid_point(ListNode*&head)
    {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=NULL &&  fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        cout<<slow->val;
        return slow;
    }
    ListNode* deleteMiddle(ListNode* head)
    {
        if(head->next==NULL)
        {
            return NULL;
        }
        if(head->next->next==NULL)
        {
            head->next=NULL;
            return head;
        }
        ListNode*mid=mid_point(head);  
        mid->val=mid->next->val;
        mid->next=mid->next->next;
        return head;
    }
};