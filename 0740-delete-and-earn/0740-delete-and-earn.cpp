class Solution {
public:
    int solve(int index,vector<int>&temp,vector<int>&dp)
    {
        //base case
        if(index>=temp.size())
        {
            return 0;
        }
        if(dp[index]!=-1)
        {
            return dp[index];
        }
        //rec case
        int pick = temp[index]*index + solve(index+2,temp,dp);
        int not_pick = solve(index+1,temp,dp);
        return dp[index] = max(pick,not_pick);
    }
    int deleteAndEarn(vector<int>& nums)
    {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>dp(maxi+2,-1);
        vector<int>temp(maxi+1,0);
        for(int i=0;i<nums.size();i++)
        {
            temp[nums[i]]++;
        }
        return solve(0,temp,dp);
    }
};