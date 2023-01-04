class Solution {
public:
    int reductionOperations(vector<int>& nums)
    {
        if(nums.size()==1)
        {
            return 0;
        }
        map<int,int>m;
        for(int i=0;i<nums.size();i++)  m[nums[i]]++;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans+=((m[nums[i]])*(m.size()-1));
            m.erase(nums[i]);
        }
        return ans;
    }
};
// 1 1 2 2 3
// 1 -> 2
// 2 -> 2
// 3 -> 1