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
    ListNode* mergeNodes(ListNode* head)
    {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        {
            return head;
        }
        ListNode*prev=head;
        ListNode*iter=head->next;
        int sum=0;
        int count=0;
        while(iter!=NULL)
        {
            if(iter->val==0)
            {
                prev->val=sum;
                sum=0;
                prev=prev->next;
                count++;
            }
            sum=sum+iter->val;
            iter=iter->next;            
        }
        ListNode*temp=head;
        int jump=1;
        while(jump!=count)
        {
            temp=temp->next;
            jump++;
        }
        temp->next=NULL;
        return head;
    }
};