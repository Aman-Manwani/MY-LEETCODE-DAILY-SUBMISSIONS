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
    int ans(TreeNode*root,int &maximum)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=max(0,ans(root->left,maximum));
        int right=max(0,ans(root->right,maximum));
        maximum=max(maximum,root->val+left+right);
        cout<<maximum<<" ";
        return max(left,right)+root->val;
    }
    int maxPathSum(TreeNode* root) 
    {
        int maximum=INT_MIN;
        ans(root,maximum);
        return maximum;
    }
};