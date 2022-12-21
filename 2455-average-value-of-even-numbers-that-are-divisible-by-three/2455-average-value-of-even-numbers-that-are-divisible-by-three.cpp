class Solution {
public:
    int averageValue(vector<int>& nums)
    {
        long long int ans=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%3==0 && nums[i]%2==0)
            {
                ans+=nums[i];
                count++;
            }
        }
        if (count==0)
        {
            return 0;
        }
        return ans/count;
    }
};