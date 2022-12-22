class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int>v;
        long long int ans=1;
        int count_0=0,index=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count_0++;
                index=i;
                continue;
            }
            ans=ans*nums[i];
        }
        if(count_0>1)
        {
            vector<int>v1(nums.size(),0);
            return v1;
        }else
        if(count_0==1)
        {
            vector<int>v1(nums.size(),0);
            v1[index]=ans;
            return v1;
        }else
        {
            for(int i=0;i<nums.size();i++)
            {
                int push=ans/nums[i];
                v.push_back(push);
            }    
        }
        return v;
    }
};