class Solution {
public:
    vector<int>v;
    vector<int> findAnagrams(string s, string p) 
    {
        int i=0,j=0;
        map<char,int>m;
        map<char,int>temp;
        for(int x=0;x<p.size();x++)
        {
            temp[p[x]]++;;
        }
        while(j-i+1<=p.size())
        {
            m[s[j]]++;
            j++;
        }
        j--;
        if(m==temp)
        {
            v.push_back(i);
        }
        while(j<s.size())
        {
            cout<<m.size();
            m[s[i]]--;
            if(m[s[i]]==0)
            {
                m.erase(s[i]);
            }
            i++;
            j++;
            m[s[j]]++;
            if(m==temp)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};