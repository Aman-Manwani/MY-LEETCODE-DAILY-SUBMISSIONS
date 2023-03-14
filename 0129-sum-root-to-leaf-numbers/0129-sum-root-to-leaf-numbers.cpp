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
    int dfs(TreeNode* root,int sum)
    {
        //base case
        if(root == NULL)
        {
            return 0;
        }
        //rec case
        sum = sum * 10 + root -> val;
        // cout<<sum<<endl;
        if(root->left == NULL && root->right == NULL)
        {
            return sum;
        }
        return dfs(root->left,sum)+dfs(root->right,sum);
    }
    int sumNumbers(TreeNode* root) 
    {
        return dfs(root,0);    
    }
};