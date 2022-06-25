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
    void get_sum(TreeNode*root,int &sum,int k)
    {
        if(root==NULL)
        {
            return;
        }
        if(k==1)
        {
            sum+=root->val;
        }
        get_sum(root->left,sum,k-1);
        get_sum(root->right,sum,k-1);
        return;
    }
    void ans(TreeNode*root,int &sum)
    {
        //base case
        if(root==NULL)
        {
            return;
        }
        //rec case
        if(root->val%2==0)
        {
            get_sum(root,sum,3);
        }
        ans(root->left,sum);
        ans(root->right,sum);
    }
    int sumEvenGrandparent(TreeNode* root)
    {
        int sum=0;
        ans(root,sum);
        return sum;
    }
};