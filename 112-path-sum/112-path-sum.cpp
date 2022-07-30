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
    bool ans(TreeNode*root,int target)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val==target)
            {
                return true;
            }
            return false;
        }
        bool op1=ans(root->left,target-root->val);
        bool op2=ans(root->right,target-root->val);
        return op1|op2;
    }
    bool hasPathSum(TreeNode* root, int targetSum)
    {
          return ans(root,targetSum); 
    }
};