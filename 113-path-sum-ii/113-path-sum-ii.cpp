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
    void f(TreeNode* root, int target,vector<int>temp,vector<vector<int>>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val==target)
            {
                temp.push_back(root->val);
                ans.push_back(temp);
                temp.pop_back();
            }
            return;
        }
        temp.push_back(root->val);
        f(root->left,target-root->val,temp,ans);
        f(root->right,target-root->val,temp,ans);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<vector<int>>ans;
        vector<int>temp;
        f(root,targetSum,temp,ans);  
        return ans;
    }
};