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
    int maxi=INT_MIN;
    TreeNode* ans(vector<int>& nums,int s,int e,int n)
    {
        if(s==e)
        {
            return NULL;
        }
        int index=-1;
        for(int j=s;j<e;j++)
        {
            if(nums[j]>maxi)
            {
                maxi=nums[j];
                index=j;
            }
        }
        maxi=INT_MIN;
        cout<<s<<" "<<e<<" "<<index<<" ";
        TreeNode*root=new TreeNode(nums[index]);
        root->left=ans(nums,s,index,n);
        root->right=ans(nums,index+1,e,n);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return NULL;
        }
        if(nums.size()==1)
        {
            TreeNode*root=new TreeNode(nums[0]);
            return root;
        }
        int s=0;
        int e=nums.size();
        int n=nums.size()-1;
        return ans(nums,s,e,n);
    }
};