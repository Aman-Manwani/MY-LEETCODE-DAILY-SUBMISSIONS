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
    int height(TreeNode*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int ls=height(root->left);
        int rs=height(root->right);
        return 1+max(ls,rs);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root,int current,int len)
    {
        if(root==NULL)
        {
            return NULL;
        }
        if(current==len)
        {
            return root;
        }
        TreeNode* left_ans=lowestCommonAncestor(root->left,current+1,len);
        TreeNode* right_ans=lowestCommonAncestor(root->right,current+1,len);
        if(left_ans!=NULL && right_ans!=NULL)
        {
            return root;
        }
        if(left_ans!=NULL)
        {
            return left_ans;
        }else
            return right_ans;
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) 
    {
        return lowestCommonAncestor(root,1,height(root));
    }
};