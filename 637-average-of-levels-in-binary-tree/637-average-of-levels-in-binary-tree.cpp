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
public:vector<double >v;
    vector<double> averageOfLevels(TreeNode* root) 
    {
        long long int sum=0;
        int count=0;
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
                    sum+=f->left->val;
                    count++;
                }
                if(f->right)
                {
                    q.push(f->right);
                    sum+=f->right->val;
                    count++;
                }
            }
            if(count==0)
            {
                continue;
            }
            v.push_back((double)sum/count);
            sum=0;
            count=0;
        }
        return v;
    }
};