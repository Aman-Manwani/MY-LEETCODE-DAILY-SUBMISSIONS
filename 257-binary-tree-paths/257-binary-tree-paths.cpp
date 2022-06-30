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
    vector<string>v;
   void ans(TreeNode*root,string s)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL)
        {
            cout<<root->val<<" ";
            s+=to_string(root->val);
            v.push_back(s);
            return;
        }
        s+=to_string(root->val);
        s+="->";
        ans(root->left,s);
        ans(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root)
    {
        string s="";
        ans(root,s);
        return v;
    }
};