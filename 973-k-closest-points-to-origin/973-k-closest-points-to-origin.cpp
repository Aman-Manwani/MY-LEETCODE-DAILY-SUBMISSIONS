class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k)
    {
        vector<vector<int>>ans;
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            int x=pow(nums[i][0],2)+pow(nums[i][1],2);
            v.push_back(make_pair(x,i));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++)
        {
            ans.push_back(nums[v[i].second]);
        }
        return ans;
    }
};