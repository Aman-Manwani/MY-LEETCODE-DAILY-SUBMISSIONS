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
    void deletion_at_tail(ListNode*&head)
    {
        ListNode*tail=head;
        while(tail!=NULL)
        {
            tail=tail->next;
        }
        ListNode*prev=head;
        int posi=1;
        while(posi<length(head)-1)
        {
            prev=prev->next;
            posi++;
        }
        delete tail;
        prev->next=NULL;
    }
    int length(ListNode* head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if(length(head)==1)
        {
            return NULL;
        }
        int k=n;
        ListNode*fast=head;
        ListNode*slow=head;
        while(k--)
        {
            fast=fast->next;
        }
        while(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(slow->next==NULL)
        {
            deletion_at_tail(head);
            return head;
        }
        slow->val=slow->next->val;
        slow->next=slow->next->next;
        return head;
    }
};