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
    int solve(TreeNode* root)
    {
        //base case
        if(root->left==NULL && root->right==NULL)
        {
            return 1;
        }
        int op1=0,op2=0;
        if(root->left)
        {
            op1=1+solve(root->left);
        }
        if(root->right)
        {
            op2=1+solve(root->right);
        }
        return max(op1,op2);
    }
    int maxDepth(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        return solve(root);    
    }
};