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
    void insert(TreeNode*root,int val,int depth,int curr)
    {
        if(root==NULL)
        {
            return;
        }
        if(curr==depth-1)
        {
            if(root->left!=NULL)
            {
                TreeNode*temp=root->left;
                root->left=new TreeNode(val);
                root->left->left=temp;
            }
            if(root->right!=NULL)
            {
                TreeNode*temp=root->right;
                root->right=new TreeNode(val);
                root->right->right=temp;
            }
            if(root->left==NULL)
            {
                root->left=new TreeNode(val);
                root->left->left=NULL;
            }
            if(root->right==NULL)
            {
                root->right=new TreeNode(val);
                root->right->right=NULL;
            }
        }else
        {
            insert(root->left,val,depth,curr+1);
            insert(root->right,val,depth,curr+1);
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth)
    {
        if(depth==1)
        {
            TreeNode*temp=new TreeNode(val);
            temp->left=root;
            return temp;
        }
        insert(root,val,depth,1);
        return root;
    }
};