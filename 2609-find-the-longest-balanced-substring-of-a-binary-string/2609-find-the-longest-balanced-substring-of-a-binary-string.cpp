class Solution {
public:
    int findTheLongestBalancedSubstring(string s)
    {
        int ans = 0,ct_0=0,ct_1=0,comp=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                if(comp==1)
                {
                    ct_0=0;
                    comp=0;
                }
                ct_0++;
                ct_1=0;
            }
            if(s[i]=='1')
            {
                ct_1++;
                comp=1;
            }
            ans = max(ans,min(ct_0,ct_1));
        }
        return 2*ans;
    }
};