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
    }*/
    int lengthOfLIS(vector<int>& nums) 
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
};