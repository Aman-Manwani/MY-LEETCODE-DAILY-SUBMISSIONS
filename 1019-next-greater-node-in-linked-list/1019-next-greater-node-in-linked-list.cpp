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
    vector<int> nextLargerNodes(ListNode* head) 
    {
        int len=length(head);
        vector<int>v(len,0);
        stack<pair<int,int>>s;
        int position=-1;
        while(head!=NULL)
        {
            position=position+1;
            if(s.empty() || (!s.empty() && s.top().second>head->val))
            {
                s.push({position,head->val});
            }else
            {
                while(!s.empty() && s.top().second<head->val)
                {
                    v[s.top().first]=head->val;
                    s.pop();
                }
                s.push({position,head->val});
            }
            head=head->next;
        }
        return v;
    }
};