class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            if(m.count(num))
            {
                continue;
            }
            if(m.count(num-1) && m.count(num+1))
            {
                int len1=m[num-1];
                int len2=m[num+1];
                m[num-len1]=len1+len2+1;
                m[num+len2]=len1+len2+1;
                m[num]=len1+len2+1;
            }else
            if(m.count(num-1)==0 && m.count(num+1)==0)
            {
                m[num]=1;
            }else
            if(m.count(num-1) && m.count(num+1)==0)
            {
                int len=m[num-1];
                m[num-len]=len+1;
                m[num]=len+1;
            }else
            {
                int len=m[num+1];
                m[num+len]=len+1;
                m[num]=len+1;
            }
        }
        int largest=0;
        for(auto it:m)
        {
            if(it.second>largest)
            {
                largest=it.second;
            }
        }
        return largest;
    }
};