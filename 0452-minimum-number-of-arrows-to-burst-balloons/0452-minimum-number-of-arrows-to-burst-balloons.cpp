class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& nums)
    {
        sort(nums.begin(),nums.end());
        // for(auto it:nums)
        // {
        //     cout<<it[0]<<" "<<it[1]<<endl;
        // }
        int i=0,count=0;
        while(i<nums.size())
        {
            vector<int>temp=nums[i];
            int mini=INT_MIN,maxi=INT_MAX;
            while(i<nums.size() && (nums[i][0]<=maxi || nums[i][1]<=maxi))
            {
                mini=max(mini,nums[i][0]);
                maxi=min(maxi,nums[i][1]);
                i++;
                cout<<mini<<" "<<maxi<<endl;
            }
            count++;
        }
        return count;
    }
};
// 0 6
// 0 9
// 2 8
// 2 9
// 3 8
// 3 9
// 3 9
// 6 8
// 7 12
// 9 10