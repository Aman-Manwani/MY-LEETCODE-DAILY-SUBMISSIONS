class Solution {
public:
    void solve(int index,vector<int>& nums,vector<int>& temp,set<vector<int>>&s)
    {
        //base case
        if(index==nums.size())
        {
            if(temp.size()>=2)
            {
                s.insert(temp);
            }
            return;
        }
        //rec case
        if(temp.size()==0 || nums[index]>=temp.back())
        {
            temp.push_back(nums[index]);
            solve(index+1,nums,temp,s);
            temp.pop_back();
        }
        solve(index+1,nums,temp,s);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>temp;
        set<vector<int>>s;
        solve(0,nums,temp,s);
        for(auto it:s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};