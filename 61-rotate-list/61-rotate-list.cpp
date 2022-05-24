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
    int length(ListNode*head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k)
    {
        int len=length(head);
        if(head==NULL)
        {
            return head;
        }
        if(k>=len)
        {
            k=k%len;
        }
        if(k==0)
        {
            return head;
        }
        ListNode*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;    
        }
        temp->next=head;
        int nod=len-k;
        int jump=1;
        ListNode*prev=head;
        while(jump<=nod-1)
        {
            prev=prev->next;
            jump++;
        }
        cout<<prev->val;
        ListNode*ans=prev->next;
        prev->next=NULL;
        return ans;
    }
};