class Solution {
public:
    int minimumRounds(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int ans=0;
        for(auto it:m)
        {
            if(it.second==1)
            {
                return -1;
            }else
                ans+=ceil((float)it.second/3);
            cout<<ans<<" ";
        }
        return ans;
    }
};