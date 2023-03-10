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
    vector<int>v;
    Solution(ListNode* head) 
    {
        ListNode*temp = head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
    }
    int getRandom() 
    {
        int lb = 0,ub = v.size()-1;
        return v[(rand() % (ub - lb + 1)) + lb] ;   
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */