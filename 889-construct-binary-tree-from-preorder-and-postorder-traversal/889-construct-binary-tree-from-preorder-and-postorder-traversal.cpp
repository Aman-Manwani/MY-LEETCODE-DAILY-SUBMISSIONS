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
    unordered_map<int, int>mp;
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int l=postorder.size();
        for (int i=0;i<l;i++)
        {
            mp[postorder[i]] = i;
        }
        return ans(preorder,postorder,0,l-1,0,l-1);
    }
    
    TreeNode* ans(vector<int>& preorder, vector<int>& postorder, int a, int b, int c, int d) {
        TreeNode* f= new TreeNode(preorder[a]);
        if (a == b)
        {
            return f;
        }
        int temp=preorder[a+1];
        int idx=mp[temp];
        int len=idx-c+1;
        f->left =ans(preorder,postorder,a+1,a+len,c,c+len-1);
        if (idx+1==d)
        {
            return f;
        }
        f->right =ans(preorder,postorder,a+len+1,b,idx+1,d-1);
        return f;
    }
};