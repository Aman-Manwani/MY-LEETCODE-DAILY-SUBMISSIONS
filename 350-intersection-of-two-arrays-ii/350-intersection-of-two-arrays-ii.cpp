class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int,int>m1;
        map<int,int>m2;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        vector<int>v;
        for(auto it:m1)
        {
            if(m2.count(it.first))
            {
                int times=min(it.second,m2[it.first]);
                while(times--)
                {
                    v.push_back(it.first);
                }
            }
        }
        return v;
    }
};