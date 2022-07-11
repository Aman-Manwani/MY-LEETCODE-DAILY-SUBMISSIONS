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
    vector<int>temp;
    vector<int> rightSideView(TreeNode* root)
    {
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
                    temp.push_back(f->left->val);
                }
                if(f->right)
                {
                    q.push(f->right);
                    temp.push_back(f->right->val);
                }
            }
            if(temp.size()==0)
            {
                continue;
            }
            v.push_back(temp[temp.size()-1]);
            temp.clear();
        }
        return v;
    }
};