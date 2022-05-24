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
    void deletion_at_head(ListNode*&head)
    {   
        ListNode*temp=head->next;
        delete head;
        head=temp;
    }
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
    void deletion_at_middle(ListNode*&head,int p)
    {   
        int jump=1;
        ListNode*temp=head;
        while(jump<p)
        {
            temp=temp->next;
            jump++;
        }
        ListNode*prev=head;
        int jumps=1;
        while(jumps<p-1)
        {
            prev=prev->next;
            jumps++;
        }
        prev->next=temp->next;
        delete temp;
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
        int len=length(head);
        int nod=len-n+1;
        if(len==1)
        {
            return NULL;
        }
        if(nod==1)
        {
            deletion_at_head(head);
            return head;
        }
        if(nod==len)
        {
            deletion_at_tail(head);
            return head;
        }
        deletion_at_middle(head,nod);
        return head;
    }
};