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
        if(head==NULL)
        {
            return head;
        }
        ListNode*iter=head;
        ListNode*point=head;
        while(iter->next!=NULL)
        {
            if(point->val==iter->next->val)
            {
                iter=iter->next;
            }else
            if(point->val!=iter->next->val)
            {
                point->next=iter->next;
                point=iter->next;
            }    
        }
        point->next=NULL;
        return head;
    }
};