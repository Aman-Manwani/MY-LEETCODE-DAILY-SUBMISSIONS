class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int k)
    {
        vector<bool>ans;
        int maxi = *max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]+k>=maxi)
            {
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};