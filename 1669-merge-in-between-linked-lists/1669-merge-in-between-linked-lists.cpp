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
    ListNode* mergeInBetween(ListNode* head1, int a, int b, ListNode* head2)
    {
        ListNode * temp1=head1;
        int rem=b-a+2;
        a--;
        while(a--)
        {
            temp1=temp1->next;
        }
        cout<<rem<<endl;
        ListNode * temp2=temp1;
        while(rem)
        {
            temp2=temp2->next;
            rem--;
        }
        temp1->next=head2;
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp2;
        return head1;
    }
};