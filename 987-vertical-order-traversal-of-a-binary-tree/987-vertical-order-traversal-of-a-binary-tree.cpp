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
    void ans(TreeNode*root,int d,int level,map<int,vector<pair<int,int>>>&m)
    {
        if(root==NULL)
        {
            return;
        }
        m[d].push_back(make_pair(level,root->val));
        ans(root->left,d-1,level+1,m);
        ans(root->right,d+1,level+1,m);
        return;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        map<int,vector<pair<int,int>>>m;
        int d=0;
        int lev=1;
        ans(root,d,lev,m);
        vector<vector<int>>v;
        for(auto p:m)
        {
            vector<int>temp;
            sort(p.second.begin(),p.second.end());
            for(auto it:p.second)
            {
                temp.push_back(it.second);
            }
            v.push_back(temp);
            temp.clear();
        }
        return v;
    }
};