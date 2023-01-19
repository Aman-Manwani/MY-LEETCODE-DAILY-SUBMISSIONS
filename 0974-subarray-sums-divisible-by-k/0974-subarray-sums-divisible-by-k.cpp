class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        int pre=0,ans=0,rem=0;
        unordered_map<int,int>m;
        m[0]++;
        for(int i=0;i<nums.size();i++)
        {
            // if(nums[i]%k==0)    ans++;
            pre+=nums[i];
            rem=pre%k;
            if(rem<0)
            {
                rem+=k;
            }
            if(m.find(rem)!=m.end())
            {
                ans+=m[rem];
                m[rem]++;
            }else
                m[rem]++;
        }
        return ans;
    }
};

// 4 9 9 7 4 5