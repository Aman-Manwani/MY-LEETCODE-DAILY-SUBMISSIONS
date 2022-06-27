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
    TreeNode* ans(vector<int>& postorder, vector<int>& inorder,int s,int e,int &i)
    {
        if(i<0 || s>e)
        {
            return NULL;
        }
        TreeNode*root=new TreeNode(postorder[i]);
        int index=-1;
        for(int j=s;s<=e;j++)
        {
            if(inorder[j]==postorder[i])
            {
                index=j;
                break;
            }
        }
        i--;
        cout<<s<<" "<<e<<" ";
        root->right=ans(postorder,inorder,index+1,e,i);
        root->left=ans(postorder,inorder,s,index-1,i);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int s=0;
        int e=postorder.size()-1;
        int i=postorder.size()-1;
        return ans(postorder,inorder,s,e,i);
    }
};