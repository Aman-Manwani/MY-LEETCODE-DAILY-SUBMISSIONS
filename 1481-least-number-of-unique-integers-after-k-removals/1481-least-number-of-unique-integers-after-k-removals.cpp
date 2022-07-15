class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        if(a.second<b.second)
        {
            return true;
        }
        return false;
    }
    int findLeastNumOfUniqueInts(vector<int>& nums, int k) 
    {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:m)
        {
            v.push_back(it);
        }
        int ans=0;
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++)
        {
            if(v[i].second==k)
            {
                i++;
                ans=v.size()-i;
                k=0;
                break;
            }else
            if(v[i].second<k)
            {
                k=k-v[i].second;    
            }else
            {
                ans=v.size()-i;
                break;
            }
        }
        return ans;
    }   
};