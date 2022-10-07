class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& nums) 
    {
        vector<vector<string>> ans;
        string temp;
        unordered_map<string, vector<string>> m;
        for(int i=0;i<nums.size();i++)
        {
            temp = nums[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(nums[i]);
        }
        for(auto it : m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};