class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) 
    {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int mini=nums[i][0],maxi=nums[i][1];
            i++;
            while(i<nums.size() && ((nums[i][0]>=mini && nums[i][0]<=maxi) || (nums[i][1]>=mini && nums[i][1]<=maxi)) )
            {
                mini=min(mini,nums[i][0]);
                maxi=max(maxi,nums[i][1]);
                i++;
            }
            i--;
            v.push_back({mini,maxi});
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i][0]<<" "<<v[i][1]<<endl;
        }
        return v;
    }
};