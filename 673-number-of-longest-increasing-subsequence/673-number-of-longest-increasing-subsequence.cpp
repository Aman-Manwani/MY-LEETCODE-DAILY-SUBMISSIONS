class Solution {
public:
    int findNumberOfLIS(vector<int>& nums)
    {
        vector<int>dp(nums.size(),1);
        vector<int>cnt(nums.size(),1);
        int maxi=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] && dp[i]<1+dp[j])
                {
                    dp[i]=dp[j]+1;
                    cnt[i]=cnt[j];
                }else
                if((nums[i]>nums[j] && dp[i]==1+dp[j]))
                {
                    cnt[i]+=cnt[j];
                }
            }
            if(dp[i]>maxi)  maxi=max(maxi,dp[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(dp[i]==maxi)
            {
                count+=cnt[i];
            }
        }
        return count;
    }
};