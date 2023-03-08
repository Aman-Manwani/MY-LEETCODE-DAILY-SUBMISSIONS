class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) 
    {
        
        long long int maxi = *max_element(nums.begin(),nums.end());
        long long int left = 1,right = maxi,ans = 0;
        while(left<=right)
        {
            long long int mid = left+(right-left)/2;
            long long int temp =0;
            for(int i=0;i<nums.size();i++)
            {
                // if(mid == 0)    return 1;
                if(nums[i]%mid==0)
                {
                    temp+=nums[i]/mid;
                }else
                    temp+=((nums[i]/mid)+1);
            }
            if(temp<=h)
            {
                ans = mid;
                right = mid-1;
            }else
                left = mid+1;
            cout<<left<<" "<<right<<" "<<mid<<" "<<ans<<endl;
        }
        return ans;
    }
};