class Solution {
public:
    /*int ans(int index,vector<int>&nums,int prev,vector<vector<int>>&dp)
    {
        //base case
        if(index==nums.size())
        {
            return 0;
        }
        if(dp[index][prev+1]!=-1) return dp[index][prev+1];
        //rec case
        int len=0+ans(index+1,nums,prev,dp);
        if(prev==-1 || nums[index]>nums[prev])
        {
            len=max(len,1+ans(index+1,nums,index,dp));
        }
        return dp[index][prev+1] = len;
    }
    int ans2(vector<int>&nums)
    {
        vector<int>temp;
        temp.push_back(nums[0]);
        int len=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>temp.back())
            {
                temp.push_back(nums[i]);
                len++;
            }else
            {
                int ind=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                temp[ind]=nums[i];
            }        
        }
        return len;
    }
    int ans3(vector<int>&nums)
    {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int index=n-1;index>=0;index--)
        {
            for(int prev=index-1;prev>=-1;prev--)
            {
                int len=0+dp[index+1][prev+1];
                if(prev==-1 || nums[index]>nums[prev])
                {
                    len=max(len,1+dp[index+1][index+1]);
                }
                dp[index][prev+1] = len;
            }
        }
        return dp[0][0];
    }*/
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int>dp(nums.size(),1);
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
            maxi=max(maxi,dp[i]);
        }
        return maxi;
    }
};