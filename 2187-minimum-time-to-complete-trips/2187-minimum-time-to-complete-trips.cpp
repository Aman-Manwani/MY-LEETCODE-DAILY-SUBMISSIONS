class Solution {
public:
    long long minimumTime(vector<int>& nums, int key)
    {
        sort(nums.begin(),nums.end());
        long long int maxi = *max_element(nums.begin(),nums.end());
        long long int i=0,j=maxi*key;
        long long int ans=0;
        while(i<=j)
        {
            long long int mid=(i+j)/2;
            long long int temp=0;
            for(int k=0;k<nums.size();k++)
            {
                temp+=mid/nums[k];
                if(nums[k]>mid) break;
            }
            cout<<i<<" "<<j<<" "<<mid<<" "<<temp<<endl;
            if(temp<key)
            {
                i=mid+1;
            }else
            {
                ans=mid;
                j=mid-1;
            }
        }
        return ans;
    }
};