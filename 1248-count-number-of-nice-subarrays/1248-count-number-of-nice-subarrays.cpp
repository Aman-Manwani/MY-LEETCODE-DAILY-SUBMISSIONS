class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;
            }else
                nums[i]=1;
        }
        int sum=0,cnt=0;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
            {
                cnt++;
            }
            
            if(m.find(sum-k)!=m.end())
            {
                cnt+=m[sum-k];
            }
            m[sum]++;
        }
        return cnt;
    }
};