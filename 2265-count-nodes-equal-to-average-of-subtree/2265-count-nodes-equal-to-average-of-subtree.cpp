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
    pair<int,int> ans(TreeNode*root,int &count)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        auto sum1=ans(root->left,count);
        auto sum2=ans(root->right,count);
        if((sum1.first+sum2.first+root->val)/(sum1.second+sum2.second+1)==root->val)
        {
            count++;
        }
        return {sum1.first+sum2.first+root->val,sum1.second+sum2.second+1};
    }
    int averageOfSubtree(TreeNode* root)
    {
        int count=0;
        ans(root,count);
        return count;
    }
};