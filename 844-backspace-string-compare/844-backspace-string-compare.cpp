class Solution {
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char>stk1;
        stack<char>stk2;
        string p="";
        string q="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(stk1.empty() && ch=='#')
            {
                continue;
            }
            if(ch=='#')
            {
                stk1.pop();
            }else 
                stk1.push(ch);
        }
        for(int i=0;i<t.size();i++)
        {
            char ch=t[i];
            if(stk2.empty() && ch=='#')
            {
                continue;
            }
            if(ch=='#')
            {
                stk2.pop();
            }else 
            {
                cout<<ch<<" ";
                stk2.push(ch);
            }
        }
        cout<<endl;
        while(!stk1.empty())
        {
            p+=stk1.top();
            stk1.pop();
        }
        reverse(p.begin(),p.end());
        while(!stk2.empty())
        {
            q+=stk2.top();
            stk2.pop();
        }
        reverse(q.begin(),q.end());
        cout<<p<<" "<<q;
        if(p==q)
        {
            return true;
        }else
            return false;
    }
};