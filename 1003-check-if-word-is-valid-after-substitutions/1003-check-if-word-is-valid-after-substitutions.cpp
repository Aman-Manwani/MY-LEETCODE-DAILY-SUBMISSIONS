class Solution {
public:
    bool isValid(string s) 
    {
        char prev,prev_prev;
        stack<char>s1;
        for(int i=0;i<s.length();i++)
        {
            if(s1.empty())
            {
                prev=s[i];
                s1.push(s[i]);
                continue;
            }
            if(s1.size()==1)
            {
                prev_prev=prev;
                prev=s[i];
                s1.push(s[i]);
                continue;
            }
            if(s[i]=='c' && prev=='b' && prev_prev=='a')
            {
                s1.pop();
                s1.pop();
                if(s1.empty())
                {
                    continue;
                }else
                if(s1.size()==1)
                {
                    prev=s1.top();
                    continue;
                }else
                {
                    prev=s1.top();s1.pop();
                    prev_prev=s1.top();
                    s1.push(prev);
                }
                continue;
            }
            prev_prev=prev;
            prev=s[i];
            s1.push(s[i]);
            if(s1.top()=='c' && prev=='b' && prev_prev=='a')
            {
                s1.pop();s1.pop();s1.pop();
                if(s1.empty())
                {
                    continue;
                }else
                if(s1.size()==1)
                {
                    prev=s1.top();
                    continue;
                }else
                {
                    prev=s1.top();s1.pop();
                    prev_prev=s1.top();
                    s1.push(prev);
                }
            }
        }
        if(s1.empty())
        {
            return true;
        }else
            return false;
    }
};