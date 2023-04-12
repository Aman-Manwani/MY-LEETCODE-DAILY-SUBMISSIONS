class Solution {
public:
    string simplifyPath(string s) 
    {
        stack<string>stk;
        string ans ="";
        for(int i=0;i<s.length();i++)
        {
            string temp="";
            if(s[i]=='/')
            {
                continue;
            }
            while(i<s.length() && s[i]!='/')
            {
                temp+=s[i];
                i++;
            }
            if(temp==".")
            {
                continue;
            }
            if(temp=="..")
            {
                if(!stk.empty())
                    stk.pop();
                continue;
            }
            stk.push(temp);
        }
        while(!stk.empty())
        {
            ans='/'+stk.top()+ans;
            stk.pop();
        }
        if(ans.length()==0)
        {
            return "/";
        }
        return ans;
    }
};