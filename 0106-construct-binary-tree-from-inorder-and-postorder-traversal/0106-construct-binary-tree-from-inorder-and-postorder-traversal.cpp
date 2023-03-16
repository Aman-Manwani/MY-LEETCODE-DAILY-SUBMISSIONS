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
    TreeNode * solve(vector<int>& inorder, vector<int>& postorder,int s,int e,int &i)
    {
        //base case
        if(i<0 || s>e)
        {
            return NULL;
        }
        TreeNode * root = new TreeNode(postorder[i]);
        int index = -1;
        for(int j=s;s<=e;j++)
        {
            if(inorder[j]==postorder[i])
            {
                index = j;
                break;
            }
        }
        i--;
        root->right = solve(inorder,postorder,index+1,e,i);
        root->left = solve(inorder,postorder,s,index-1,i);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int start = 0;
        int end = postorder.size()-1;
        int index = postorder.size()-1;
        return solve(inorder,postorder,start,end,index);
    }
};