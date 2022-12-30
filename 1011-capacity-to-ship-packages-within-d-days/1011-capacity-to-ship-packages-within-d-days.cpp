class Solution {
public:
    bool istrue(vector<int>&nums,int mid,int days)
    {
        int count=1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>mid)
            {
                sum=nums[i];
                count++;
            }
        }
        if(count<=days)
        {
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& nums, int days)
    {
        int sum=0,maxi=INT_MIN;
        for(auto it : nums)
        {
            sum+=it;
            maxi=max(maxi,it);
        }
        if(nums.size()==days)
        {
            return maxi;
        }
        int low = maxi;
        int high = sum;
        int mid,ans;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(istrue(nums,mid,days))
            {
                ans=mid;
                high=mid-1;
            }else
            {
                low=mid+1;
            }
        }
        return ans;
    } 
};
// [10,50,100,100,50,100,100,100]
