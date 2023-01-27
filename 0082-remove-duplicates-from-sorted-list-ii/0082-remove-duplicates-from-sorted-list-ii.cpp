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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode*dummy = new ListNode(-1);
        ListNode* temp = dummy;
        temp->next=head;
        ListNode *curr = head->next;
        while(curr!=NULL)
        {
            bool is_run = false;
            while(curr!=NULL && temp->next->val==curr->val)
            {
                is_run=true;
                curr=curr->next;
            }
            if(is_run)
            {
                temp->next=curr;
            }else
                temp=temp->next;
            if(curr!=NULL)
            {
                curr=curr->next;
            }
        }
        return dummy->next;
    }
};