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
    bool isSymmetric(TreeNode* root)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int k=q.size();
            for(int i=0;i<k;i++)
            {
                TreeNode*f=q.front();
                q.pop();
                if(f->left==NULL)
                {
                    v.push_back(200);
                }
                if(f->left)
                {
                    q.push(f->left);
                    cout<<f->left->val<<" ";
                    v.push_back(f->left->val);
                }
                if(f->right==NULL)
                {
                    v.push_back(200);
                }
                if(f->right)
                {
                    q.push(f->right);
                    cout<<f->right->val<<" ";
                    v.push_back(f->right->val);
                }
            }
            int i=0,j=v.size()-1;
            cout<<j<<" ";
            while(i<j)
            {
                cout<<v[i]<<" "<<v[j]<<" ";
                if(v[i]!=v[j])
                {
                    return false;
                }
                i++;j--;
            }
            v.clear();
        }
        return true;
    }
};