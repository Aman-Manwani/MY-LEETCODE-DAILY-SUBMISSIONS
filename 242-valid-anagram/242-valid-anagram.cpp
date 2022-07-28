class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size()!=t.size())
        {
            return false;
        }
        map<char,int>for_s;
        map<char,int>for_t;
        for(int i=0;i<s.size();i++)
        {
            for_s[s[i]]++;
            for_t[t[i]]++;
        }
        if(for_s==for_t)
        {
            return true;
        }
        return false;
    }
};