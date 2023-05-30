class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        map<int,vector<int>>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int finder = target - nums[i];
            if(m.find(finder)!=m.end())
            {
                for(auto it:m[finder])
                {
                    if(it != i)
                    {
                        ans.push_back(it);
                        ans.push_back(i);
                        return ans;
                    }
                }
            }
        }
        return ans;
    }
};