class Solution {
public:
    string makeGood(string s) 
    {
        stack<char>stk;
        string res="";
        for(int i=0;i<s.size();i++)
        {
            char x=s[i];
            if(stk.empty())
            {
                stk.push(x);
            }else
            if(stk.size()>0 && x==stk.top()+32)
            {
                stk.pop();
            }else
            if(stk.size()>0 && x==stk.top()-32)
            {
                stk.pop();
            }else
                stk.push(x);
        }
        while(!stk.empty())
        {
            res+=stk.top();
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};