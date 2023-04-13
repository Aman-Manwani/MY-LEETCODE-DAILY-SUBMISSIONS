class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums)
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<vector<int>>ans;
        while(m.size())
        {
            vector<int>temp;
            for(auto it:m)
            {
                temp.push_back(it.first);
            }
            for(auto it:temp)
            {
                m[it]--;
                if(m[it]==0)
                {
                    m.erase(it);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};