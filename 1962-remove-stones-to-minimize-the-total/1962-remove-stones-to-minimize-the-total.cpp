class Solution {
public:
    int minStoneSum(vector<int>& nums, int k)
    {
        priority_queue<int>pq(nums.begin(),nums.end());
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            pq.push(x-(x/2));
        }
        long long int ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};