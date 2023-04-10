class Solution {
public:
    bool isValid(string s)
    {
        stack<int>stk;
        for(int i=0;s[i]!='\0';i++)
        {
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='[')
            {
                stk.push(ch);
            }else
            if(ch==')')
            {
                if(stk.empty() || stk.top()!='(')
                {
                    return false;
                }else
                    stk.pop();
            }else
            if(ch=='}')
            {
                if(stk.empty() || stk.top()!='{')
                {
                    return false;
                }else
                    stk.pop();
            }else
            if(ch==']')
            {
                if(stk.empty() || stk.top()!='[')
                {
                    return false;
                }else
                    stk.pop();
            }
        }
        if(stk.empty())
        {
            return true;
        }else
            return false;
    }
};