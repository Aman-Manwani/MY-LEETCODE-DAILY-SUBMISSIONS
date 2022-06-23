/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p==NULL && q==NULL)
        {
            return true;
        }
        if((p==NULL && q!=NULL) ||(p!=NULL && q==NULL))
        {
            return false;
        }
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(p);
        q2.push(q);
        if(p->val!=q->val)
        {
            return false;
        }
        while(!q1.empty() && !q2.empty())
        {
            TreeNode*f1=q1.front();
            TreeNode*f2=q2.front();
            q1.pop();
            q2.pop();
            if(f1->left && f2->left)
            {
                if(f1->left->val!=f2->left->val)
                {
                    return false;
                }
                q1.push(f1->left);
                q2.push(f2->left);
            }
            if(f1->right && f2->right)
            {
                if(f1->right->val!=f2->right->val)
                {
                    return false;
                }
                q1.push(f1->right);
                q2.push(f2->right);
            }
            if((f1->left!=NULL && f2->left==NULL) || (f1->left==NULL && f2->left!=NULL))
            {
                return false;
            }
            if((f1->right!=NULL && f2->right==NULL) || (f1->right==NULL && f2->right!=NULL))
            {
                return false;
            }
        }
        return true;
    }
};