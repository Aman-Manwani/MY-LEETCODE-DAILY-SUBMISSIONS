class Solution {
public:
    long long countGood(vector<int>& nums, int k) 
    {
        unordered_map<int,int>m;
        int i=0,j=0;
        long long int c=0,ans=0;
        while(j<nums.size())
        {
            m[nums[j]]++;
            c+=m[nums[j]]-1;
            while(i<j && c>=k)
            {
                ans+=nums.size()-j;
                m[nums[i]]--;
                c-=m[nums[i]];
                i++;
            }
            j++;
        }
        return ans;
    }
};