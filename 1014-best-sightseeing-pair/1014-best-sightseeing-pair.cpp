class Solution {
public:
    /*int ans(int index,vector<int>&nums,vector<int>&dp)
    {
        //base case
        if(index==nums.size()-2)
        {
            return nums[index]+nums[index+1]-1;
        }
        if(dp[index]!=-1)   return dp[index];
        //rec case
        int maxi=0;
        for(int j=index+1;j<nums.size();j++)
        {
            maxi=max(maxi,max(nums[j]+nums[index]+index-j,ans(j,nums,dp)));
        }
        return dp[index] = maxi;
    }*/
    int maxScoreSightseeingPair(vector<int>& nums) 
    {
        /*vector<int>dp(nums.size(),-1);
        dp[nums.size()-2]=nums[nums.size()-2]+nums[nums.size()-1]-1;
        for(int i=nums.size()-3;i>=0;i--)
        {
            int maxi=0;
            for(int j=i+1;j<nums.size();j++)
            {
                maxi=max(maxi,max(nums[j]+nums[i]+i-j,dp[j]));
            }
            dp[i]=maxi;
        }
        return dp[0];
    }*/
        int n = nums.size();
        int dp[n+1];
        dp[0] = nums[0];
        int ans = 0;
        for(int i=1;i<n;i++)
        {
            ans = max(ans,dp[i-1]+nums[i]-i);
            dp[i] = max(dp[i-1],nums[i]+i);
        }
        return ans;
    }
};