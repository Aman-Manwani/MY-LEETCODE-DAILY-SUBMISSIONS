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
    ListNode* mid_point(ListNode*head)
    {
        ListNode*fast=head->next;
        ListNode*slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode*head)
    {
        ListNode*prev=NULL;
        ListNode*current=head;
        ListNode*forward=NULL;
        while(current!=NULL)
        {
            forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) 
    {
        if(head->next==NULL)
        {
            return true;
        }
        ListNode*mid=mid_point(head);
        ListNode*temp=mid->next;
        mid->next=reverse(temp);
        ListNode*head1=head;
        ListNode*head2=mid->next;
        while(head2!=NULL)
        {
            if(head1->val!=head2->val)
            {
                return false;
            }
                head1=head1->next;
                head2=head2->next;
        }
        return true;
    }
};