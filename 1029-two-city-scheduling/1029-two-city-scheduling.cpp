class Solution {
public:
    static bool cmp(vector<int>a,vector<int>b)
    {
        if(a[1]-a[0]<b[1]-b[0])
        {
            return false;
        }else
        if(a[1]-a[0]==b[1]-b[0])
        {
            if(a[0]<b[0])
            {
                return true;
            }
            return false;
        }else
        {
            return true;
        }
    }
    int twoCitySchedCost(vector<vector<int>>&nums)
    {
        sort(nums.begin(),nums.end(),cmp);
        int k=nums.size()/2;
        int ans=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i][0]<<" "<<nums[i][1]<<endl;    
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<k)
            {
                ans=ans+nums[i][0];    
            }else
            ans=ans+nums[i][1];
            cout<<ans<<" ";
        }
        return ans;
    }
};