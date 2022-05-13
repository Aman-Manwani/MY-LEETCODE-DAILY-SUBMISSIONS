class Solution {
public:
    void permutations(vector<int>& nums,vector<vector<int>>&v,vector<int>&x,int i,int j)
    {
        //base case
        if(i==nums.size())
        {
            v.push_back(x);
            return;
        }
        //rec case
        for(int k=i;k<nums.size();k++)
        {
            swap(nums[i],nums[k]);
            x[j]=nums[i];
            permutations(nums,v,x,i+1,j+1);
            //backtracking step
            swap(nums[i],nums[k]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int >x(nums.size(),0);
        vector<vector<int>>v;
        permutations(nums,v,x,0,0);
        return v;
    }
};