class Solution {
public:
    int countBinarySubstrings(string s)
    {
        int prev=0,ans=0;
        for(int i=0;i<s.length();i++)
        {
            cout<<i<<" ";
            if(prev==0)
            {
                int ct=0;
                if(s[i]=='0')
                {
                    while(s[i]=='0')
                    {
                        ct++;
                        i++;
                    }
                }else
                {
                    while(s[i]=='1')
                    {
                        ct++;
                        i++;
                    }
                }
                i--;
                prev=ct;
            }else
            if(s[i]=='0')
            {
                int ct=0;
                while(s[i]=='0')
                {
                    ct++;
                    i++;
                }
                i--;
                ans+=min(prev,ct);
                prev=ct;
            }else
            if(s[i]=='1')
            {
                int ct=0;
                while(s[i]=='1')
                {
                    ct++;
                    i++;
                }
                i--;
                ans+=min(prev,ct);
                prev=ct;
            }
            cout<<ans<<" ";
        }
        return ans;
    }
};