class Solution {
public:
    int countVowelSubstrings(string s) 
    {
        if(s.length()<5)
        {
            return 0;
        }
        map<char,int>m;
        int count=0;
        for(int i=0;i<s.length()-4;i++)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
            {
                continue;
            }
            for(int j=i;j<s.length();j++)
            {
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
                {
                    m[s[j]]++;
                }
                cout<<m.size()<<" "<<i<<" "<<j<<endl;
                if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u')
                {
                    m.clear();
                    break;
                }
                if(m.size()==5)
                {
                    count++;
                }
            }
            m.clear();
        }
        return count;
    }
};