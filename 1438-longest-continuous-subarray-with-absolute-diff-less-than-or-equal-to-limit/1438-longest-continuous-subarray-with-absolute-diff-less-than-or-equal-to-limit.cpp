class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) 
    {
        priority_queue<pair<int, int>> maxh;
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> minh;
        int i = 0; int j = 0;
        int ans = 0;
        while(j<nums.size())
        {
            maxh.push({nums[j], j});
            minh.push({nums[j], j});
            if(maxh.top().first-minh.top().first<=limit)
            {
                ans= max(ans, j-i+1);
                j++;
            }
            else if(maxh.top().first-minh.top().first>limit)
            {
                i++;
                while(maxh.top().second<i)
                {
                    maxh.pop();
                }
                while(minh.top().second<i)
                {
                    minh.pop();
                }   
                j++;
            }
        }
        return ans;
    }
};