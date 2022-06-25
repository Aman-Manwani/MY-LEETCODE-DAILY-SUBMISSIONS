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
    vector<vector<int>>v;
    vector<int>temp;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        if(root==NULL)
        {
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        temp.push_back(root->val);
        v.push_back(temp);
        temp.clear();
        int x=0;
        while(!q.empty())
        {
            x++;
            int k=q.size();
            for(int i=0;i<k;i++)
            {
                TreeNode*f=q.front();
                q.pop();
                cout<<"aman";
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
            if(x%2==1)
            {
                reverse(temp.begin(),temp.end());
                v.push_back(temp);
                temp.clear();
            }
            if(x%2==0)
            {
                v.push_back(temp);
                temp.clear();
            }
        }
        v.pop_back();
        return v;
    }
};