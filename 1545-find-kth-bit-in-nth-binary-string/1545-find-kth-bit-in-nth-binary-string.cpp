class Solution {
public:
    string findstring(int n)
    {
        if(n==1)
        {
            return "0";
        }
        string s=findstring(n-1);
        string ans=s+"1";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                s[i]='0';
            }else
                s[i]='1';
        }
        reverse(s.begin(),s.end());
        ans+=s;
        return ans;
    }
    char findKthBit(int n, int k)
    {
        string s=findstring(n);
        return s[k-1];
    }
};