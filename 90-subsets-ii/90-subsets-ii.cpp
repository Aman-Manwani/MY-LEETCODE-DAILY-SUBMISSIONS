class Solution {
public:
    void ans(set<vector<int>>&s,vector<int>&out,vector<int>& nums,int i,int j)
    {
        //base case
        if(nums.size()==i)
        {
            s.insert(out);
            out.pop_back();
            return;
        }
        //rec case
        //inc
        out.push_back(nums[i]);
        ans(s,out,nums,i+1,j+1);
        //exc
        ans(s,out,nums,i+1,j);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        vector<int>out;
        set<vector<int>>s;
        ans(s,out,nums,0,0);
        for(auto it:s)
        {
            v.push_back(it);
        }
        return v;
    }
};