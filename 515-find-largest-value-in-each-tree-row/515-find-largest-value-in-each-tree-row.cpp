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
    vector<int> largestValues(TreeNode* root) 
    {
        int maxi=INT_MIN;
        if(root==NULL)
        {
            return v;
        }
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(root->val);
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        v.push_back(root->val);
        while(!q.empty())
        {
            int k=q.size();
            for(int i=0;i<k;i++)
            {
                TreeNode*f=q.front();
                q.pop();
                if(f->left)
                {
                    q.push(f->left);
                    if(f->left->val>maxi)
                    {
                        maxi=f->left->val;
                    }
                }
                if(f->right)
                {
                    q.push(f->right);
                    if(f->right->val>maxi)
                    {
                        maxi=f->right->val;
                    }
                }
            }
            v.push_back(maxi);
            maxi=INT_MIN;
        }
        v.pop_back();
        return v;
    }
};