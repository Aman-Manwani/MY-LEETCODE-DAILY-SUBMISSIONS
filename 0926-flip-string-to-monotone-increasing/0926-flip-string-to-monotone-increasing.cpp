class Solution {
public:
    int minFlipsMonoIncr(string s) 
    {
        int ct_1=0,flip=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                ct_1++;
            }else
            {
                if(ct_1>0)
                {
                    flip++;
                }
            }
            if(flip>ct_1)
            {
                flip=ct_1;
            }
        }
        return flip;
    }
};