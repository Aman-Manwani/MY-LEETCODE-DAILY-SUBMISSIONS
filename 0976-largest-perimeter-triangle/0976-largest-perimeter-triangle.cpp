class Solution {
public:
    bool isvalid(int a,int b,int c)
    {
        if(a+b>c && b+c>a && a+c>b)
        {
            return true;
        }
        return false;
    }
    int largestPerimeter(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<=nums.size()-3;i++)
        {
            if( isvalid(nums[i],nums[i+1],nums[i+2]))
            {
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
    }
};