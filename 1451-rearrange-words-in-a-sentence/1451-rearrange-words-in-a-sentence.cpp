class Solution {
public:
    static bool comp(pair<string,int>a,pair<string,int>b)
    {
        // cout<<a.first.length()<<" "<<b.first.length()<<endl;
        if(a.first.length()>b.first.length())
        {
            return false;
        }
        if(a.first.length()==b.first.length())
        {
            if(a.second<b.second)
            {
                return true;
            }else
                return false;
        }
        return true;
    }
    string arrangeWords(string s)
    {
        vector<pair<string,int>>v;
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                temp[0]=tolower(temp[0]);
                v.push_back({temp,i});
                temp="";
                continue;
            }
            temp+=s[i];
            if(i==s.length()-1)
            {
                temp[0]=tolower(temp[0]);
                v.push_back({temp,i});
            }
        }
        sort(v.begin(),v.end(),comp);
        string ans="";
        for(int i=0;i<v.size();i++)
        {
            if(i==0)
            {
                v[i].first[0]=toupper(v[i].first[0]);
            }
            ans+=v[i].first;
            if(i!=v.size()-1)
            {
                ans+=" ";
            }
        }
        return ans;
    }
};