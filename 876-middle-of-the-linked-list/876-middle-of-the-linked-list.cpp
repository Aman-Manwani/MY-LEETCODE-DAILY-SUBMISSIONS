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
        int cnt=0;
        while(head!=NULL)
        {
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) 
    {
        if(head==NULL)
        {
            return head;
        }
        int mid,length_of_linked_list=length(head);
        if(length_of_linked_list==1)
        {
            return head;
        }
        if(length_of_linked_list%2==1)
        {
            mid=(length_of_linked_list+1)/2;
        }else
            mid=((length_of_linked_list)/2)+1;
        
        int jump=1;
        ListNode*temp=head;
        while(jump<mid)
        {
            temp=temp->next;
            jump++;
        }
        head=temp;
        return head;    
    }
};