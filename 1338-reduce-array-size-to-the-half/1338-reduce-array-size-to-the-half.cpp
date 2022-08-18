class Solution {
public:
    static bool cmp(const pair<int,int>a,const pair<int,int>b)
    {
        return a.second>b.second;
    }
    int minSetSize(vector<int>&nums) 
    {
        cout<<nums.size();
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        if(m.size()==nums.size())
        {
            return nums.size()/2;
        }
        cout<<m.size();
        vector<pair<int,int>>temp;
        for(auto it:m)
        {
            temp.push_back(it);
        }
        cout<<temp.size();
        sort(temp.begin(),temp.end(),cmp);
        int x=nums.size();
        int count=0;
        for(int i=0;i<temp.size();i++)
        {
            x=x-temp[i].second;
            count++;
            if(x<=nums.size()/2)
            {
                break;
            }
        }
        return count;
    }
};