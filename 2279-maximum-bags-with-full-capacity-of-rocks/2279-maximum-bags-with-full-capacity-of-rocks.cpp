class Solution {
public:
    int maximumBags(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        long long int total=0;
        vector<int>v(nums1.size(),0);
        for(int i=0;i<nums1.size();i++)
        {
            v[i]=nums1[i]-nums2[i];
            total+=v[i];
        }
        if(k>=total)
        {
            return nums1.size();
        }
        sort(v.begin(),v.end());
        int count=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                count++;
            }else
            {
                if(v[i]<=k)
                {
                    count++;
                    k-=v[i];
                }else
                    break;
            }
        }
        return count;
    }
};