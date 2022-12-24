class Solution {
public:
    int minFlips(string s)
    {
        int cnt=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
        int ans=0;
        if(s[s.length()-1]=='1')
        {
            ans=2*cnt+1;
        }else
            ans=2*cnt;
        return ans;
    }
};