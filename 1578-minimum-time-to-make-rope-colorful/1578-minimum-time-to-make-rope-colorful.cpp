class Solution {
public:
    int minCost(string s, vector<int>& nums)
    {
        int ans=0;
        
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]==s[i+1])
            {
                int maxi=0;
                int sum=nums[i];
                while(s[i]==s[i+1])
                {
                    sum+=nums[i+1];
                    maxi=max(nums[i],max(maxi,nums[i+1]));
                    i++;
                }
                ans+=sum-maxi;
                sum=0;
            }
        }
        return ans;
    }
};