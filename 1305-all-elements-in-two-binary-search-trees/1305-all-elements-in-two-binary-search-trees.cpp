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
    vector<int>v;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2)
    {
        queue<TreeNode*>q;
        if(root1!=NULL)
        {
            q.push(root1);
            v.push_back(root1->val);
        }
        while(!q.empty())
        {
            TreeNode*f=q.front();
            q.pop();
            if(f->left)
            {
                v.push_back(f->left->val);
                q.push(f->left);
            }
            if(f->right)
            {
                v.push_back(f->right->val);
                q.push(f->right);
            }
        }
        if(root2!=NULL)
        {
            q.push(root2);
            v.push_back(root2->val);
        }
        while(!q.empty())
        {
            TreeNode*f=q.front();
            q.pop();
            if(f->left)
            {
                v.push_back(f->left->val);
                q.push(f->left);
            }
            if(f->right)
            {
                v.push_back(f->right->val);
                q.push(f->right);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};