class Solution {
public:
    static bool comp(string &s1,string &s2)
    {
        if(s1.size()<s2.size())
        {
            return true;
        }
        return false;
    }
    bool compare(string &s1,string &s2)
    {
        if(s1.size()!=1+s2.size())  return false;
        else
        {
            int i=0,j=0;
            while(i<s1.size())
            {
                if(s1[i]==s2[j])
                {
                    i++;j++;
                }else
                {
                    i++;
                }
            }
            if(i==s1.size() && j==s2.size())    return true;
            return false;
        }
    }
    int longestStrChain(vector<string>&nums)
    {
        vector<int>dp(nums.size(),1);
        sort(nums.begin(),nums.end(),comp);
        int maxi=1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(compare(nums[i],nums[j]) && dp[i]<1+dp[j])
                {
                    dp[i]=1+dp[j];
                }
            }
            if(dp[i]>maxi)  maxi=dp[i];
        }
        return maxi;
    }
};