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
    bool ans(TreeNode*root,long mini,long maxi)
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->val>mini && root->val<maxi && ans(root->left,mini,root->val) && ans(root->right,root->val,maxi))
        {
            return true;
        }
        return false;
    }
    bool isValidBST(TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            return true;
        }
        return ans(root,LONG_MIN,LONG_MAX);    
    }
};