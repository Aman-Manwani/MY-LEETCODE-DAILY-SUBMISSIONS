class Solution {
public:
    long long repairCars(vector<int>& nums, int cars)
    {
        int maxi = *max_element(nums.begin(),nums.end());
        long long int temp = 1e14;
        long long int left  = 1;
        long long int right = temp;
        long long int ans = 0;
        while(left<=right)
        {
            long long int mid = left + (right-left)/2;
            long long int temp_cars=0;
            for(int i=0;i<nums.size();i++)
            {
                temp_cars += (int)sqrt(mid/nums[i]);
            }
            if(temp_cars>=cars)
            {
                ans=mid;
                right = mid-1;
            }else
                left = mid+1;
        }
        return ans;
    }
};