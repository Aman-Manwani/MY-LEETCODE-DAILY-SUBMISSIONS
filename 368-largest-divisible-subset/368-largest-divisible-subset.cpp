class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) 
    {
        int maxi=1;
        int last_ind;
        vector<int>dp(nums.size(),1);
        vector<int>hash(nums.size(),0);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            hash[i]=i;
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0 && dp[i]<1+dp[j])
                {
                    
                    dp[i]=1+dp[j];
                    hash[i]=j;
                }
            }
            if(dp[i]>maxi)
            {
                maxi=dp[i];
                last_ind=i;
            }
        }
        vector<int>ans;
        ans.push_back(nums[last_ind]);
        while(hash[last_ind]!=last_ind)
        {
            last_ind=hash[last_ind];
            ans.push_back(nums[last_ind]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};