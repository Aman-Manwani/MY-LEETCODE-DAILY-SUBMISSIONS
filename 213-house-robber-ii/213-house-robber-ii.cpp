class Solution {
public:
    int ans(vector<int>&nums,vector<int>&dp,int index)
    {
        //base case
        if(index==0)
        {
            return nums[0];
        }
        if(index<0)
        {
            return 0;
        }
        if(dp[index]!=-1)
        {
            return dp[index];
        }
        //rec case
        int pick=nums[index]+ans(nums,dp,index-2);
        int not_pick=0+ans(nums,dp,index-1);
        return dp[index]=max(pick,not_pick);
    }
    int rob(vector<int>& nums)
    {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int>dp(n+1,-1);
        vector<int>temp1;
        vector<int>temp2;
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                temp1.push_back(nums[i]);
            }
            if(i!=n-1)
            {
                temp2.push_back(nums[i]);
            }
        }
        int ans1=ans(temp1,dp,temp1.size()-1);
        for(int i=0;i<dp.size();i++)
        {
            dp[i]=-1;
        }
        int ans2=ans(temp2,dp,temp2.size()-1);
        cout<<ans1<<" "<<ans2<<" ";
        return max(ans1,ans2);
    }
};