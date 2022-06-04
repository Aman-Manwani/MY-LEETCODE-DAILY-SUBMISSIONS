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
    ListNode*reverse(ListNode*head)
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
    void insertion_at_tail(ListNode*&head,ListNode*&tail,int d)
    {
        ListNode*temp=new ListNode(d);
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            return;
        }else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    ListNode*add(ListNode*first,ListNode*second)
    {
        int carry=0;
        ListNode*anshead=NULL;
        ListNode*anstail=NULL;
        while(first!=NULL || second!=NULL || carry!=0)
        {
            int sum=0;
            int v1=0;
            if(first!=NULL)
            {
                v1=first->val;
            }
            int v2=0;
            if(second!=NULL)
            {
                v2=second->val;
            }
            sum=carry+v1+v2;
            int digit=sum%10;
            insertion_at_tail(anshead,anstail,digit);
            carry=sum/10;
            if(first!=NULL)
                first=first->next;
            if(second!=NULL)
                second=second->next;
        }
        return anshead;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode*temp1=reverse(l1);
        ListNode*temp2=reverse(l2);
        ListNode*ans=add(temp1,temp2);
        ans=reverse(ans);
        return ans;
    }
};