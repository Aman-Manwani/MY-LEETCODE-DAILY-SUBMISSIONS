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
        return max(ls,rs)+1;
    }
    vector<vector<int>>v;
    vector<int>temp;
    void ans(TreeNode*root,int k)
    {
        if(root==NULL)
        {
            return;
        }
        if(k==1)
        {
            temp.push_back(root->val);
        }
        ans(root->left,k-1);
        ans(root->right,k-1);
        return;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        int h=height(root);
        for(int i=1;i<=h;i++)
        {
            ans(root,i);
            v.push_back(temp);
            temp.clear();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};