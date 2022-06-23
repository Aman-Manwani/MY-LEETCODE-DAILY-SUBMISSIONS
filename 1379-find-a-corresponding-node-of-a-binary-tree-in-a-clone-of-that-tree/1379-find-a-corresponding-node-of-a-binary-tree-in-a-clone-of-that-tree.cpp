/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        TreeNode*waste;
        if(original->left==NULL && original->right==NULL)
        {
            return cloned;
        }
        queue<TreeNode*>q1;
        q1.push(cloned);
        if(cloned->val==target->val)
        {
            return cloned;
        }
        while(!q1.empty())
        {
            TreeNode*f1=q1.front();
            q1.pop();
            if(f1->left)
            {
                if(f1->left->val==target->val)
                {
                    return f1->left;
                }
                q1.push(f1->left);
            }
            if(f1->right)
            {
                if(f1->right->val==target->val)
                {
                    return f1->right;
                }
                q1.push(f1->right);
            }
        }
        return waste;
    }
};