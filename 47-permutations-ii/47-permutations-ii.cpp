class Solution {
public:
    void permutations(vector<int>& nums,set<vector<int>>&s,vector<int>& x,int i,int j)
    {
        //base case
        if(i==nums.size())
        {
            s.insert(x);
            return;
        }
        //rec case
        for(int k=i;k<nums.size();k++)
        {
            swap(nums[i],nums[k]);
            x[j]=nums[i];
            permutations(nums,s,x,i+1,j+1);
            swap(nums[i],nums[k]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>>v;
        set<vector<int>>s;
        vector<int>x(nums.size(),0);
        permutations(nums,s,x,0,0);
        for(auto it:s)
        {
            v.push_back(it);
        }
        return v;
    }
};