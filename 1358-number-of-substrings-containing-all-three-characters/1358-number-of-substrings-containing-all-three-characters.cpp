class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        map<char,int>m;
        int i=0;int j=0;int count=0;
        while(j<s.size())
        {
            m[s[j]]++;
            if(m.size()==3)
            {
                while(m.size()==3 && i<=j)
                {
                    count+=s.size()-j;
                    m[s[i]]--;
                    if(m[s[i]]==0)
                    {
                        m.erase(s[i]);
                    }
                    cout<<m.size();
                    i++;
                }
            }
            j++;
        }
        return count;
    }
};