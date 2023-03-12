class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums)
    {
        unordered_map<int,int>m;
        m[0]++;m[nums[0]]++;
        long long int ans= 0;
        if(nums[0]==0)
        {
            ans++;
        }
        for(int i=1;i<nums.size();i++)
        {
            nums[i] = nums[i]^nums[i-1];
            m[nums[i]]++;
            if(m[nums[i]]>1)
            {
                ans+=(m[nums[i]]-1);
            }
        }
        return ans;
    }
};