/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>v;
    void print_at_level_k(TreeNode*root,int k)
    {
        if(root==NULL)
        {
            return;
        }
        if(k==0)
        {
            v.push_back(root->val);
        }
        print_at_level_k(root->left,k-1);
        print_at_level_k(root->right,k-1);
    }
    int print_at_distance_k(TreeNode*root,TreeNode* target,int k)
    {
        if(root==NULL)
        {
            return -1;
        }
        if(root->val==target->val)
        {
            print_at_level_k(root,k);
            return 0;
        }
        int left_dist=print_at_distance_k(root->left,target,k);
        if(left_dist!=-1)
        {
            if(left_dist+1==k)
            {
                v.push_back(root->val);
            }else
                print_at_level_k(root->right,k-2-left_dist);
            return 1+left_dist;
        }
        int right_dist=print_at_distance_k(root->right,target,k);
        if(right_dist!=-1)
        {
            if(right_dist+1==k)
            {
                v.push_back(root->val);
            }else
                print_at_level_k(root->left,k-2-right_dist);
            return 1+right_dist;
        }
        return -1;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        print_at_distance_k(root,target,k);
        return v;
    }
};