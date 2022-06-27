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
    int i=0;
    TreeNode* ans(vector<int>& preorder, vector<int>& inorder,int s,int e)
    {
        if(i==preorder.size() || s>e)
        {
            return NULL;
        }
        TreeNode*root=new TreeNode(preorder[i]);
        int index=-1;
        for(int j=s;s<=e;j++)
        {
            if(inorder[j]==preorder[i])
            {
                index=j;
                break;
            }
        }
        i++;
        root->left=ans(preorder,inorder,s,index-1);
        root->right=ans(preorder,inorder,index+1,e);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int s=0;
        int e=preorder.size();
        return ans(preorder,inorder,s,e);
    }
};