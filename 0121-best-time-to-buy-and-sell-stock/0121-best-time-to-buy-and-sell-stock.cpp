class Solution {
public:
    int maxProfit(vector<int>& nums)
    {
        int mini =INT_MAX,maxi = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mini = min(mini,nums[i]);
            maxi = max(maxi,nums[i]-mini);
        }
        return maxi;
    }
};