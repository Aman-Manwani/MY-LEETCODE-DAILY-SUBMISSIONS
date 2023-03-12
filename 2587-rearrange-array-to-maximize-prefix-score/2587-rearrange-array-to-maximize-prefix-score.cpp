class Solution {
public:
    int maxScore(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(),greater<int>());
        long long int sum=INT_MAX,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(sum==INT_MAX && nums[i]>0)
            {
                sum=nums[i];
                ans++;
                continue;
            }
            if(sum==INT_MAX)
            {
                return ans;
            }
            sum+=nums[i];
            if(sum<=0)
            {
                return ans;
            }else
                ans++;
            cout<<ans<<" "<<sum<<endl;
        }
        return ans;
    }
};