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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        //base case
        if(list1==NULL && list2==NULL)
        {
            return NULL;
        }
        if(list1==NULL)
        {
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }
        //rec case
        ListNode *temp;
        if(list1->val <= list2->val)
        {
            temp=list1;
            temp->next=mergeTwoLists(list1->next,list2);
        }else
        if(list1->val > list2->val)
        {
            temp=list2;
            temp->next=mergeTwoLists(list1,list2->next);
        }
        return temp;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        ListNode*ans;
        ListNode*dupl=NULL;
        for(int i=0;i<lists.size();i++)
        {
            ans=mergeTwoLists(lists[i],dupl);
            dupl=ans;
        }
        return ans;
    }
};
