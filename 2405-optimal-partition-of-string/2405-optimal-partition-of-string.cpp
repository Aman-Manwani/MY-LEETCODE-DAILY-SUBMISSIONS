class Solution {
public:
    int partitionString(string s) 
    {
        unordered_map<char,int>m;
        int count = 0; 
        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]]>0)
            {
                m.clear();
                m[s[i]]++;
                count++;
            }else
            {
                m[s[i]]++;
            }
            if(i==s.length()-1)
            {
                count++;
            }
            // cout<<m.size()<<" ";
        }
        if(count==0)
        {
            return 1;
        }
        return count;
    }
};