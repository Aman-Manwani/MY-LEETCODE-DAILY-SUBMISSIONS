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
    int length(ListNode *head)
    {
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) 
    {
        int n=length(head);
        int ans=0;
        while(head!=NULL)
        {
            ans=ans+(head->val)*pow(2,n-1);
            head=head->next;
            n--;
        }
        return ans;
    }
};