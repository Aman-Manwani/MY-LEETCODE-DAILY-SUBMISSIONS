/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode*head)
    {
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(headA->next==NULL && headB->next==NULL &&headA->val==headB->val)
        {
            return headA;
        }
        int len1=length(headA);
        int len2=length(headB);
        int diff=abs(len1-len2);
        cout<<len1<<" "<<len2;
        ListNode*temp;
        if(len1<len2)
        {
            temp=headB;
            while(diff--)
            {
                temp=temp->next;
            }
        }else
        {
            temp=headA;
            while(diff--)
            {
                temp=temp->next;
            }
        }
        if(len1<len2)
        {
            while(temp!=NULL)
            {
                if(temp==headA)
                {
                    return temp;
                }
                temp=temp->next;
                headA=headA->next;
            }
        }else
        {
            while(temp!=NULL)
            {
                if(temp==headB)
                {
                    return temp;
                }
                temp=temp->next;
                headB=headB->next;
            }
        }
        return NULL;
    }
};