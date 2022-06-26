class Solution {
public:
    int maxScore(vector<int>& nums, int k) 
    {
        if(k==nums.size())
        {
            return accumulate(nums.begin(),nums.end(),0);
        }
        long long int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        cout<<sum;
        long long int ans=sum;
        for(int i=k-1;i>=0;i--)
        {
            sum=sum-nums[i];
            sum=sum+nums[nums.size()+i-k];
            ans=max(sum,ans);
        }
        return ans;
    }
};