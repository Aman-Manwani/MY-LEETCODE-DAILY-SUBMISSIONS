class Solution {
public:
    int ans1(vector<int>&nums,int k)
    {
        int i=0;
        int j=0;
        int ans=0;
        map<int,int>m;
        while(j<nums.size())
        {
            m[nums[j]]++;
            if(m.size()<=k)
            {
                ans+=j-i+1;
                j++;
            }else
            if(m.size()>k)
            {
                while(i<=j && m.size()>k)
                {
                    m[nums[i]]--;
                    if(m[nums[i]]==0)
                    {
                        m.erase(nums[i]);
                    }
                    i++;
                }
                if(m.size()==k)
                {
                    ans+=j-i+1;
                }
                j++;
            }
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k)
    {
        return ans1(nums,k)-ans1(nums,k-1);
    }
};