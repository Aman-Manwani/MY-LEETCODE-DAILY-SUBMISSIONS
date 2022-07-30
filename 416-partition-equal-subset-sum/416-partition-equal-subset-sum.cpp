class Solution {
public:
    /*bool ans(int index,int target,vector<int>&nums,vector<vector<int>>&dp)
    {
        //base case
        if(target==0)
        {
            return true;
        }
        if(index==nums.size()-1)
        {
            if(nums[nums.size()-1]==target)
            {
                return true;
            }
            return false;
        }
        if(dp[index][target]!=-1)
        {
            return dp[index][target];
        }
        //rec case
        int not_pick=ans(index+1,target,nums,dp);
        int pick=0;
        if(nums[index]<=target)
        {
            pick=ans(index+1,target-nums[index],nums,dp);
        }
        return dp[index][target]= pick | not_pick;
    }*/
    bool subsetSumToK(int n, int k, vector<int> &arr)
    {
        vector<vector<bool>> dp(n,vector<bool>(k+1,false));
        for(int i=0; i<n; i++)
        {
            dp[i][0] = true;
        }
        if(arr[0]<=k)
            dp[0][arr[0]] = true;
        for(int ind = 1; ind<n; ind++)
        {
            for(int target= 1; target<=k; target++)
            {
                bool notTaken = dp[ind-1][target];
                bool taken = false;
                    if(arr[ind]<=target)
                        taken = dp[ind-1][target-arr[ind]];
                dp[ind][target]= notTaken||taken;
            }
        }
        return dp[n-1][k];
    }
    bool canPartition(vector<int>& nums)
    {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2)
        {
            return false;
        }
        int target=sum/2;
        //return subsetSumToK(nums.size(),target,nums);
        vector<vector<bool>>dp(nums.size(),vector<bool>(target+1,false));
        for(int i=0;i<nums.size();i++)
        {
            dp[i][0]=true;
        }
        if(nums[0]<=target)
            dp[0][nums[0]]=true;
        
        for(int i=1;i<nums.size();i++)
        {
            for(int j=1;j<=target;j++)
            {
                bool not_pick=dp[i-1][j];
                bool pick=false;
                if(nums[i]<=j)
                {
                    pick=dp[i-1][j-nums[i]];
                }
                dp[i][j]=pick | not_pick;
            }
        }
        return dp[nums.size()-1][target];
    }
};