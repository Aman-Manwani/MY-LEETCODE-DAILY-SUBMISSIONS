class Solution {
public:
    char repeatedCharacter(string s)
    {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])!=m.end())
            {
                return s[i];
            }else
                m[s[i]]++;
        }
        return -1;
    }
};