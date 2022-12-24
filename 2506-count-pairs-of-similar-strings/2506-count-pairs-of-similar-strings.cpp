class Solution {
public:
    int similarPairs(vector<string>& nums)
    {
        map<set<char>,int>m;
        for(int i=0;i<nums.size();i++)
        {
            set<char>s;
            for(int j=0;j<nums[i].length();j++)
            {
                s.insert(nums[i][j]);
            }
            m[s]++;
        }
        int cnt=0;
        for(auto it:m)
        {
            cout<<it.second<<endl;
            cnt+=((it.second)*(it.second-1))/2;
            cout<<cnt<<endl;
        }
        return cnt;
    }
};