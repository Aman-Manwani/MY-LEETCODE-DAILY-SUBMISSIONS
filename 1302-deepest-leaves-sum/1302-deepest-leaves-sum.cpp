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
    int sum=0;
    int sum_of_kth_level(TreeNode*root,int k)
    {
        if(root==NULL)
        {
            return 0;
        }
        if(k==1)
        {
            sum=sum+root->val;
        }
        sum_of_kth_level(root->left,k-1);
        sum_of_kth_level(root->right,k-1);
        return sum;
    }
    int deepestLeavesSum(TreeNode* root)    
    {
        int h=height(root);
        return sum_of_kth_level(root,h);
    }
};