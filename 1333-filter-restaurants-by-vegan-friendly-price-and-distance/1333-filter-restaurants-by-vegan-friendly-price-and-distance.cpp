class Solution {
public:
    static bool comp(vector<int>a,vector<int>b)
    {
        if(a[1]<b[1])
        {
            return false;
        }
        if(a[1]==b[1])
        {
            if(a[0]<b[0])
            {
                return false;
            }
            return true;
        }
        return true;
    }
    vector<int> filterRestaurants(vector<vector<int>>& nums, int a, int b, int c) 
    {
        sort(nums.begin(),nums.end(),comp);
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(a==1 && nums[i][3]<=b && nums[i][4]<=c && nums[i][2]==a)
            {
                v.push_back(nums[i][0]);
            }else
            if(a==0 && nums[i][3]<=b && nums[i][4]<=c)
            {
                v.push_back(nums[i][0]);
            }
        }
        return v;
    }
};