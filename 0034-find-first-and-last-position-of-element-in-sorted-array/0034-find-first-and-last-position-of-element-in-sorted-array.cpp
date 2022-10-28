class Solution {
public:
    int first_occ(vector<int>&nums,int target)
    {
        int i=0,j=nums.size()-1;
        int ans=-1,mid;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            cout<<mid<<" ";
            if(nums[mid]==target)
            {
                ans=mid;
                j=mid-1;
            }else
            if(nums[mid]<target)
            {
                i=mid+1;
            }else
                j=mid-1;
        }
        return ans;
    }
    int last_occ(vector<int>&nums,int target)
    {
        int i=0,j=nums.size()-1;
        int ans=-1,mid;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                i=mid+1;
            }else
            if(nums[mid]<target)
            {
                i=mid+1;
            }else
                j=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int>v;
        v.push_back(first_occ(nums,target));
        v.push_back(last_occ(nums,target));
        return v;
    }
};