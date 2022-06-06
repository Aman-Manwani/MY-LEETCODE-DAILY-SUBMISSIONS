class Solution {
public:
    string decodeString(string s) 
    {
        stack<int>stk1;
        stack<string>stk2;
        int current_num=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch>='0' && ch<='9')
            {
                current_num=current_num*10+(ch-'0');
            }else
            if(ch=='[')
            {
                stk2.push(ans);
                stk1.push(current_num);
                current_num=0;
                ans="";
            }else
            if(ch==']')
            {
                string temp=stk2.top();
                stk2.pop();
                int prev_num=stk1.top();
                stk1.pop();
                prev_num=prev_num;
                while(prev_num--)
                {
                    temp+=ans;
                }
                ans=temp;
            }else
                ans+=ch;
        }
        return ans;
    }
};